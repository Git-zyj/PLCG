/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6792
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
    var_19 = ((long long int) var_6);
    var_20 = ((((/* implicit */_Bool) var_4)) ? (((long long int) ((((/* implicit */_Bool) var_2)) ? (var_1) : (-2LL)))) : (8268345003987716062LL));
    var_21 = ((long long int) max((min((var_11), ((-9223372036854775807LL - 1LL)))), (((((/* implicit */_Bool) 0LL)) ? (-393206571778279078LL) : (var_2)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_22 = max((((long long int) -2357714678694143801LL)), (((long long int) 3294569463884656587LL)));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_14 [19LL] [i_1] [i_2 + 1] [i_3] [i_3 - 1] [3LL] = max(((+(arr_10 [17LL] [i_3] [i_2 + 2] [i_2 - 1]))), (((long long int) arr_10 [2LL] [i_1 - 1] [i_3 - 2] [i_3 + 1])));
                            var_23 = arr_5 [i_2 + 1] [i_2 + 1];
                            arr_15 [i_1] [i_2 + 2] [i_2 + 2] = arr_6 [i_0] [1LL] [0LL];
                            var_24 = max((13LL), (17592186044415LL));
                        }
                    } 
                } 
                var_25 = ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (min((((((/* implicit */_Bool) 7917217892805754732LL)) ? (arr_3 [i_0] [20LL]) : (-5747741741213202951LL))), (var_1))) : (max((var_3), (arr_8 [i_0] [i_1] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_1 - 1] [i_1 - 1] [11LL] [3LL] [i_1 + 1] [22LL]) : (var_9))))));
                            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_8 [i_0] [i_1] [i_4] [i_5]) : (-212026583347401228LL)))) ? (((((/* implicit */_Bool) -2246343454483948767LL)) ? (((((/* implicit */_Bool) 2723946481701685420LL)) ? (arr_19 [i_5] [i_1] [20LL] [i_5] [i_5] [i_1]) : (-1355588244684999512LL))) : (arr_19 [i_0] [8LL] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((max((8611149215178997428LL), (arr_5 [i_1 + 1] [i_1 + 1]))) > (((long long int) -6633442868652267427LL)))))));
                            var_28 = 3LL;
                            arr_23 [i_5] [i_4] [i_1 - 1] [i_5] = max((((long long int) arr_0 [i_1 + 1] [i_1 - 1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775782LL)) ? (8945873163879944040LL) : (9LL)))) ? (min((741005528679731424LL), (2648883808458713569LL))) : (((((/* implicit */_Bool) arr_22 [i_0] [8LL] [i_0] [i_5] [2LL])) ? (var_8) : (arr_5 [i_1] [i_5]))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                            {
                                var_29 = ((((/* implicit */_Bool) -4755140997823812859LL)) ? (arr_1 [i_1 + 1]) : (0LL));
                                var_30 = -4465560042177438253LL;
                                var_31 = ((/* implicit */long long int) max((var_31), (2239650372832393784LL)));
                                var_32 = ((-790852958319451749LL) - (arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_0]));
                                arr_27 [i_6] [i_4] [i_4] [i_4] [i_0] &= arr_7 [i_1 - 1] [i_1 + 1];
                            }
                        }
                    } 
                } 
                arr_28 [20LL] = -101450845706633738LL;
            }
        } 
    } 
}
