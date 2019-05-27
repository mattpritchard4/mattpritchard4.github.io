module.exports = {
    siteMetadata: {
        title: 'Matt Pritchard',
        author: 'Matt Pritchard',
    },
    plugins: [
        'gatsby-plugin-react-helmet',
        `gatsby-transformer-sharp`,
        `gatsby-plugin-sharp`,
        {
            resolve: `gatsby-plugin-manifest`,
            options: {
                name: 'gatsby-starter-reasonml',
                short_name: 'starter-reasonml',
                start_url: '/',
                background_color: '#663399',
                theme_color: '#663399',
                display: 'minimal-ui',
                icon: 'static/images/gatsby-icon.png', // This path is relative to the root of the site.
            },
        },
        {
            resolve: `gatsby-source-filesystem`,
            options: {
                name: `pages`,
                path: `${__dirname}/src/pages`,
            },
        },
        'gatsby-transformer-remark',
        'gatsby-plugin-offline',
    ],
}
