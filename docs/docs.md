All documentation for Thunder should be stored in this repository.

Documentation is generated using [ReadTheDocs](https://readthedocs.org/) with the [Material for MkDocs](https://squidfunk.github.io/mkdocs-material/) theme.

Follow the below guidelines when writing documentation:

* Check all spelling/grammar before submitting changes
* Use `note`, `warning` etc formatting where appropriate to call out import information. Usage:

```
!!! note
	Text you want to show up in the note box
```

!!! note
	Text you want to show up in the note box

* Use [mermaid](https://mermaid.js.org/) diagrams where possible instead of embedding images
    * This helps ensure accessibility, loads faster and looks good on all screen sizes

````
``` mermaid
graph LR
  A[Start] --> B{Error?};
  B -->|Yes| C[Hmm...];
  C --> D[Debug];
  D --> B;
  B ---->|No| E[Yay!];
```
````

``` mermaid
graph LR
  A[Start] --> B{Error?};
  B -->|Yes| C[Hmm...];
  C --> D[Debug];
  D --> B;
  B ---->|No| E[Yay!];
```