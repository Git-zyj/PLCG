/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = (max(var_13, (!13530523025082329214)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] = (18446744073709551615 <= 2448920539601357610);
            var_14 = ((var_6 ? 13240806026758147471 : 10856018172104278972));
            var_15 = ((arr_0 [i_0] [i_1]) ? (!8567897611136296914) : 32767);
        }

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_16 = (~(arr_0 [i_0] [i_0]));

            for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
            {
                var_17 = min((arr_10 [i_3 - 1] [i_3 + 1] [i_3 + 1]), ((-(arr_4 [i_0] [i_2] [i_3]))));
                var_18 = (((((~(arr_0 [i_0] [i_3])))) == (max(19255417920788358, (arr_3 [12] [12] [12])))));
                var_19 *= ((+-17618911382121351336) ? (!var_3) : (arr_3 [i_0] [2] [i_0]));
                var_20 ^= var_0;
            }
            for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_21 = ((((7969300844880284683 ? 10856018172104278972 : 11834803179319948931))) ? ((var_7 ? (~15055426225828710231) : (arr_11 [i_0] [i_0] [i_0]))) : 18427488655788763263);
                var_22 = (((arr_4 [i_0] [i_2] [i_4]) & ((~(arr_2 [i_0] [i_0])))));
                var_23 = ((arr_12 [i_0] [i_0] [i_0]) - ((((!((((arr_4 [i_0] [i_0] [i_0]) ? (arr_1 [10]) : (arr_7 [i_2] [i_4])))))))));
                arr_14 [i_0] [i_2] [i_2] [i_4 - 1] = (15540976012303091079 ? 9987900274665814330 : 12125473087454854138);
                var_24 = (i_2 % 2 == zero) ? (min(4856228316591006492, ((+((var_10 >> (((arr_9 [i_0] [i_2] [i_4] [i_0]) - 15464257599296142077)))))))) : (min(4856228316591006492, ((+((var_10 >> (((((arr_9 [i_0] [i_2] [i_4] [i_0]) - 15464257599296142077)) - 6798720887234561445))))))));
            }
        }
    }
    #pragma endscop
}
