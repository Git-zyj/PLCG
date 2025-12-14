/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73722
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 = arr_0 [i_0] [i_0];
        var_13 = ((/* implicit */_Bool) (((((~((-9223372036854775807LL - 1LL)))) != (min((arr_1 [i_0]), (((/* implicit */long long int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) != (((18446744073709551591ULL) ^ (((/* implicit */unsigned long long int) arr_1 [i_0])))))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (6860908745218242807ULL)))));
        var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_0])) ^ (arr_0 [i_0] [(_Bool)1])))) ? (min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL))) : (((long long int) arr_1 [i_0])))), (arr_1 [i_0])));
    }
    for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        var_15 = min(((((_Bool)1) ? (((/* implicit */unsigned long long int) -2262941484133789315LL)) : (12118901736126713570ULL))), (((/* implicit */unsigned long long int) max((arr_2 [i_1 - 1]), (arr_2 [i_1 + 1])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) * (arr_3 [i_2])))) ? (((11585835328491308808ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (arr_5 [i_1] [i_1 - 2] [i_2 - 1])));
            var_17 = ((/* implicit */_Bool) (~(7420541179668969753LL)));
            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (2262941484133789325LL) : (-2262941484133789326LL)))) ? (15273913901411927518ULL) : (6860908745218242806ULL));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_19 = ((((/* implicit */_Bool) 11585835328491308808ULL)) ? (1712430296348671510ULL) : (arr_8 [i_1 + 1]));
                var_20 = (+(3528100672620259102LL));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_21 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -3779608246427045028LL)) == (var_7))))) < (-9223372036854775798LL));
                var_22 = var_4;
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    for (long long int i_7 = 4; i_7 < 15; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_7 [i_1 - 2]);
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1LL))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_1] [i_1 + 1] [7LL] [i_1 - 1] [i_1 + 1] [i_5]))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) -9223372036854775804LL)))));
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_18 [(_Bool)1] [i_3] [i_1 + 1]) >> (((/* implicit */int) arr_12 [i_1] [i_1] [i_3]))))) ? (((200293071474589679LL) / (-5627961715180700811LL))) : ((-9223372036854775807LL - 1LL))));
            }
            var_28 = ((/* implicit */_Bool) var_7);
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_1 - 2] [i_1 + 1] [i_1] [i_1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 6860908745218242809ULL)) ? (((/* implicit */unsigned long long int) 8430982516351187104LL)) : (arr_24 [i_10] [i_10]))) < (6860908745218242807ULL)));
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((arr_12 [i_1] [i_1] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_9] [i_9]))) : (var_9))) : (11584723230884220745ULL)));
                var_32 = ((/* implicit */_Bool) 0ULL);
                var_33 = (+(((((/* implicit */unsigned long long int) 1498904946853524324LL)) & (4431133341755397126ULL))));
            }
        }
    }
    var_34 = var_0;
}
