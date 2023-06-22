
            /// Returns the `rustc` SemVer version and additional metadata
            /// like the git short hash and build date.
            pub fn version_meta() -> VersionMeta {
                VersionMeta {
                    semver: Version {
                        major: 1,
                        minor: 70,
                        patch: 0,
                        pre: vec![],
                        build: vec![],
                    },
                    host: "x86_64-pc-windows-msvc".to_owned(),
                    short_version_string: "rustc 1.70.0 (90c541806 2023-05-31)".to_owned(),
                    commit_hash: Some("90c541806f23a127002de5b4038be731ba1458ca".to_owned()),
                    commit_date: Some("2023-05-31".to_owned()),
                    build_date: None,
                    channel: Channel::Stable,
                }
            }
            