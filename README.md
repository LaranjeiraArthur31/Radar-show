# Tracker-de-Séries
```mermaid
C4Context
    title Arquitetura geral — Series Mood Tracker

    Person(user, "Usuário", "Usa o app para rastrear séries e receber sugestões")

    System(frontend, "Frontend Web / App", "Interface principal do usuário")

    System(auth, "Autenticação", "JWT / OAuth")
    System(track, "Módulo de Tracking", "Adicionar e avaliar séries")
    System(mood, "Módulo de Humor", "Selecionar estado emocional")
    System(notif, "Central de Notificações", "Gerencia notificações do usuário")
    System(rec, "Motor de Recomendação", "IA + filtros personalizados")
    System(sched, "Scheduler", "Verificação periódica de novidades")

    SystemDb(db, "Banco de Dados", "PostgreSQL")

    System_Ext(ext_ai, "API de IA", "OpenAI / Claude")
    System_Ext(ext_tv, "API de Séries", "TMDb / TVMaze")
    System_Ext(push, "Serviço de Push", "Email / Web Push")

    Rel(user,    frontend, "Usa")
    Rel(frontend, auth,    "Autentica via")
    Rel(frontend, track,   "Registra séries")
    Rel(frontend, mood,    "Informa humor")
    Rel(frontend, notif,   "Visualiza notificações")

    Rel(auth,  db,  "Lê e escreve")
    Rel(track, db,  "Lê e escreve")
    Rel(track, ext_tv, "Busca dados de séries")

    Rel(mood, rec,    "Envia humor + histórico")
    Rel(rec,  db,     "Consulta preferências")
    Rel(rec,  ext_ai, "Gera sugestões via IA")

    Rel(notif, sched,   "Dispara verificação")
    Rel(sched, db,      "Consulta séries monitoradas")
    Rel(sched, ext_tv,  "Verifica novos episódios")
    Rel(sched, push,    "Envia notificações")
```

## Sobre o Projeto
**Projeto:** [Tracker de Séries]
**Problema que resolve:** [Notificar novos episódios e lançamentos]

## Integrantes
| Nome | GitHub |
|------|--------|
| Arthur Lopes Laranjeira | @LaranjeiraArthur31 |
| Igor Mastrangelo Domingos | @IgorMastrangelo |
| Vitor Martins Furlan | @vtr1812 |

