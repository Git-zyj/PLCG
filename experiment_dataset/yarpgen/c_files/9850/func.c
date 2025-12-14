/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9850
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) 9223372036854775806LL))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) var_9);
                                var_18 = ((/* implicit */unsigned int) ((unsigned short) var_3));
                                var_19 = ((/* implicit */unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) min((var_6), (var_6))))))), (arr_1 [i_1] [i_1])));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) 2219786227539486510LL)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)230), (((/* implicit */unsigned char) (_Bool)1)))))) : (((unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 1) 
    {
        var_22 &= ((/* implicit */unsigned char) var_14);
        var_23 = ((/* implicit */unsigned char) (_Bool)1);
        var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (var_11))))));
    }
    for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_18 [i_6] [i_6])) <= (((/* implicit */int) arr_18 [i_6] [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6] [i_6])))))) : (min((((/* implicit */long long int) arr_18 [i_6] [i_6])), (0LL)))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (_Bool)0))));
    }
    for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)5)) ? (arr_2 [i_7]) : (arr_2 [i_7]))) > (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)27718)) ^ (((/* implicit */int) (unsigned short)15896)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 390203895U)), (min((17724889972539212180ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */int) (_Bool)1)), (5))) <= (((/* implicit */int) (_Bool)1))))))));
            var_29 = ((short) (+(((/* implicit */int) (unsigned char)24))));
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((((-2112005104) + (2147483647))) >> (((/* implicit */int) (unsigned char)0)))) <= (((/* implicit */int) arr_14 [i_8] [i_8] [i_7] [i_7] [i_7] [i_7] [i_7])))))));
        }
        var_31 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */int) arr_25 [i_7] [i_7] [i_7])) <= (var_6)))));
    }
}
