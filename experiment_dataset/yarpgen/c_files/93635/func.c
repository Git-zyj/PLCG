/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93635
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
    var_19 &= ((/* implicit */_Bool) (+(((((((/* implicit */int) var_3)) + (((/* implicit */int) var_16)))) + (((var_7) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)159))))))));
    var_20 = ((/* implicit */unsigned char) -6039665750171145720LL);
    var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) <= (var_0));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_2 + 3] [i_2 + 3])) << (((unsigned long long int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6039665750171145711LL)) ? (13693304657038947636ULL) : (18446744073709551612ULL)));
                                var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_2 - 2])) > (((/* implicit */int) (unsigned char)3))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? ((-(var_17))) : (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_1 [i_0])))));
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */long long int) (~(max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)12))))));
                var_26 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) ((_Bool) 18446744073709551615ULL))))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    var_27 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) ((unsigned char) arr_9 [i_0]))), (arr_2 [i_0] [i_0] [i_5])))));
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((_Bool) var_15)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_29 -= ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_5])) ? (arr_16 [i_0] [i_1] [i_5] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                        var_30 = ((/* implicit */unsigned long long int) (~(-2684895366878159078LL)));
                    }
                }
                for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    var_31 = ((/* implicit */unsigned char) ((((long long int) ((unsigned long long int) (unsigned char)9))) & (-6039665750171145711LL)));
                    var_32 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_14 [i_0] [i_0])), (min((288230376151646208LL), (((/* implicit */long long int) arr_14 [i_7] [i_0]))))))), (((((/* implicit */_Bool) min((arr_15 [i_0] [i_0] [i_7]), (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned long long int) (-(arr_15 [i_0] [i_1] [i_7])))) : (max((arr_0 [5LL]), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_22 [i_1] [i_7] [i_7] = (unsigned char)8;
                }
            }
        } 
    } 
}
