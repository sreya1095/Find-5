## How to Contribute to a GitHub Repository

### Forking the Repository

1. Navigate to the repository you want to contribute to on GitHub.
2. Click the `Fork` button at the top right of the repository page. This will create a copy of the repository under your GitHub account.

### Cloning the Repository Locally

1. Go to your GitHub profile and find the forked repository.
2. Click the `Code` button and copy the URL.
3. Open your terminal or command prompt.
4. Run the following command to clone the repository to your local machine:
    ```sh
    git clone <URL>
    ```
   Replace `<URL>` with the URL you copied.

### Adding Files

1. Navigate to the cloned repository directory:
    ```sh
    cd <repository-name>
    ```
   Replace `<repository-name>` with the name of your repository.
2. Add or modify files as needed.

### Committing Changes

1. Stage the changes you made:
    ```sh
    git add .
    ```
2. Commit the changes with a descriptive message:
    ```sh
    git commit -m "Your commit message"
    ```

### Pushing Changes

1. Push the changes to your forked repository:
    ```sh
    git push origin main
    ```
   Replace `main` with the branch name if you are working on a different branch.

### Creating a Pull Request

1. Go to your forked repository on GitHub.
2. Click the `Compare & pull request` button.
3. Add a title and description for your pull request.
4. Click `Create pull request` to submit your changes for review.

Your pull request will be reviewed by the repository maintainers, and they may ask for further changes before merging it into the original repository.
