/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8854
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) == (3718258320115564711LL))))))) ? (var_6) : (max((((/* implicit */int) ((unsigned short) var_8))), ((+(((/* implicit */int) (signed char)46))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_5))));
                }
                /* vectorizable */
                for (signed char i_3 = 2; i_3 < 23; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 23; i_4 += 4) 
                    {
                        for (short i_5 = 1; i_5 < 20; i_5 += 1) 
                        {
                            {
                                var_21 ^= ((long long int) ((_Bool) var_5));
                                var_22 = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
                                var_23 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) -1734391755))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_3] = ((((/* implicit */_Bool) (signed char)-24)) || (((/* implicit */_Bool) (signed char)(-127 - 1))));
                }
                for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    arr_17 [i_1] = ((/* implicit */short) ((unsigned short) ((signed char) arr_8 [i_1])));
                    var_24 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (signed char)28))) - (((((((/* implicit */_Bool) 1522943434)) ? (1522943434) : (var_14))) << ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))) - (1)))))));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)12)), ((+(((/* implicit */int) var_15))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (max((0ULL), (((/* implicit */unsigned long long int) -7270834919895102878LL))))));
                            arr_23 [i_0] [i_1] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) ((unsigned short) var_8))) << (((((/* implicit */int) (unsigned char)171)) >> (((-705839655) + (705839675)))))))));
                            /* LoopSeq 2 */
                            for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                            {
                                arr_26 [i_0] [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) var_6))))) | (-1398846201)))) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (signed char)0))))))));
                                var_26 ^= ((/* implicit */signed char) (~((((-(((/* implicit */int) (signed char)52)))) ^ (((/* implicit */int) (unsigned char)171))))));
                                arr_27 [i_0] [i_7] [i_1] [i_0] = ((/* implicit */signed char) (((((-(((/* implicit */int) arr_9 [i_8] [i_8] [i_1])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_24 [i_0] [i_7] [i_8])) ? (((/* implicit */int) (short)-2048)) : (((/* implicit */int) (short)32767)))))) : (((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (unsigned char)116))))) : (((unsigned long long int) var_5))))));
                            }
                            for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                            {
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)0)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))) | (23ULL)))));
                                arr_33 [i_0 - 1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)56))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4090583892U)))) ? (((int) arr_18 [i_0 - 3])) : (((/* implicit */int) ((short) (-(((/* implicit */int) var_11))))))));
                            }
                            var_27 -= ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_11))));
}
