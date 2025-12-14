/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93933
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 = var_7;
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 13530523025082329214ULL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((unsigned long long int) 18446744073709551615ULL)) <= (((unsigned long long int) 2448920539601357610ULL))));
            var_14 = ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (13240806026758147471ULL) : (10856018172104278972ULL)));
            var_15 = ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8567897611136296914ULL)))))) : (((unsigned long long int) 32767ULL)));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_16 = (~(((unsigned long long int) arr_0 [i_0] [i_0])));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) /* same iter space */
            {
                var_17 = min(((+(arr_10 [i_3 - 1] [i_3 + 1] [i_3 + 1]))), ((-(arr_4 [i_0] [i_2] [i_3]))));
                var_18 = ((/* implicit */unsigned long long int) (((+((~(arr_0 [i_0] [i_3]))))) == (max((19255417920788358ULL), (arr_3 [12ULL] [12ULL] [12ULL])))));
                var_19 *= ((((/* implicit */_Bool) (+((-(17618911382121351336ULL)))))) ? (((unsigned long long int) (!(((/* implicit */_Bool) var_3))))) : (((unsigned long long int) ((unsigned long long int) arr_3 [i_0] [2ULL] [i_0]))));
                var_20 ^= var_0;
            }
            for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) /* same iter space */
            {
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7969300844880284683ULL)) ? (10856018172104278972ULL) : (11834803179319948931ULL)))) ? (((((/* implicit */_Bool) var_7)) ? ((~(15055426225828710231ULL))) : (arr_11 [i_0] [i_0] [i_0]))) : (18427488655788763263ULL));
                var_22 = ((unsigned long long int) ((arr_4 [i_0] [i_2] [i_4]) & ((~(arr_2 [i_0] [i_0])))));
                var_23 = ((((unsigned long long int) arr_12 [i_0] [i_0] [i_0])) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_1 [10ULL]) : (arr_7 [i_2] [i_4])))))))));
                arr_14 [i_0] [i_2] [i_2] [i_4 - 1] = ((((/* implicit */_Bool) 15540976012303091079ULL)) ? (9987900274665814330ULL) : (12125473087454854138ULL));
                var_24 = (i_2 % 2 == zero) ? (min((4856228316591006492ULL), ((+(((var_10) >> (((arr_9 [i_0] [i_2] [i_4] [i_0]) - (15464257599296142077ULL))))))))) : (min((4856228316591006492ULL), ((+(((var_10) >> (((((arr_9 [i_0] [i_2] [i_4] [i_0]) - (15464257599296142077ULL))) - (6798720887234561445ULL)))))))));
            }
        }
    }
}
