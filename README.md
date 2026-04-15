# Tracker-de-Séries
flowchart TD

A[Usuário entra no app] --> B{Usuário já tem perfil?}

B -- Não --> C[Cadastro + Preferências iniciais]
B -- Sim --> D[Carregar perfil]

C --> D

D --> E[Selecionar séries assistidas]
E --> F[Salvar histórico e progresso]

F --> G[Atualizar base de dados local]

G --> H[Scheduler de verificação]

H --> I[Consultar APIs externas de séries]
I --> J{Novo episódio ou temporada?}

J -- Sim --> K[Gerar notificação]
J -- Não --> L[Continuar monitoramento]

K --> M[Enviar push/email/in-app]

D --> N[Capturar mood do usuário]
N --> O[Processar mood + histórico]

O --> P[Motor de recomendação]

P --> Q{Tipo de recomendação}

Q -- Similaridade de conteúdo --> R[Filtrar por gênero, elenco, avaliação]
Q -- Baseado no mood --> S[Filtrar por tom emocional]

R --> T[Rankear resultados]
S --> T

T --> U[Exibir séries recomendadas]

U --> V[Feedback do usuário]
V --> W[Atualizar modelo de recomendação]

W --> P
## Sobre o Projeto
**Projeto:** [Tracker de Séries]
**Problema que resolve:** [Notificar novos episódios e lançamentos]

## Integrantes
| Nome | GitHub |
|------|--------|
| Arthur Lopes Laranjeira | @LaranjeiraArthur31 |
| Igor Mastrangelo Domingos | @IgorMastrangelo |
| Vitor Martins Furlan | @vtr1812 |

