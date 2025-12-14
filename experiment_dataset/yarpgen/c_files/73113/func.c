/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73113
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (+(18446744073709551597ULL))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))))))) : (var_0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned char) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)9)) : (((/* implicit */int) (short)0)))) : ((+(min((536870912), (((/* implicit */int) var_4))))))));
                var_18 = ((/* implicit */signed char) ((unsigned short) var_7));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
                {
                    arr_6 [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0] [i_1 - 1] [i_2]) : (arr_2 [i_0 - 2] [i_1 - 1] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2])) || (((/* implicit */_Bool) min((((/* implicit */short) var_9)), (var_3))))))) : ((~(((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) var_5))))))));
                    arr_7 [i_0] = ((((/* implicit */_Bool) (-((+(5)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_3 [i_0 - 2]))))))) : (((((/* implicit */int) (short)10)) << (((var_2) - (590929517U))))));
                    var_19 += ((/* implicit */unsigned char) ((((unsigned int) ((unsigned char) (unsigned char)198))) ^ (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((arr_0 [i_0]) ^ (((/* implicit */int) (signed char)-117)))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (-536870924) : (arr_0 [i_0 - 3]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4871)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_4 [i_3])))) ? (((((/* implicit */_Bool) 13246796902032744630ULL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_9)))) : (min((16760832), (-536870889)))))));
                    var_21 = ((/* implicit */short) min((((unsigned long long int) 9223372036854775807LL)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (3850047202U))))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65531)) : (-5)))) ? (((/* implicit */unsigned int) arr_0 [i_0 - 1])) : ((~(var_12)))))))));
                                arr_17 [i_0 - 3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (arr_4 [i_0 - 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [(signed char)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_10))))))));
                                var_23 &= ((/* implicit */unsigned long long int) -2147483639);
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << ((((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)253)) < (((/* implicit */int) (short)-20111))))))) + (14)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    arr_21 [i_0 - 2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_6]);
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 19; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_8]);
                                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (-(arr_4 [i_0]))))));
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_2 [i_6] [i_1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_5 [i_0 + 1]))))));
                                var_28 = ((/* implicit */signed char) ((_Bool) 2147483647));
                                arr_28 [i_0] [i_1] [i_6] [(_Bool)1] [i_8] = ((/* implicit */unsigned int) (short)9);
                            }
                        } 
                    } 
                    arr_29 [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) arr_14 [i_6] [i_0])) ? (((/* implicit */int) var_11)) : (1))) : (((/* implicit */int) ((((/* implicit */int) (short)-24316)) <= (((/* implicit */int) (unsigned char)253)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
                    arr_33 [i_9] = ((/* implicit */unsigned short) ((2682807448675675207ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0 - 3] [i_1 - 2] [i_1])))));
                }
                arr_34 [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)56), (((/* implicit */unsigned char) var_15)))))) <= (((((/* implicit */_Bool) var_10)) ? (0U) : (var_2)))))), (((((/* implicit */_Bool) arr_31 [i_1 + 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_2)))));
            }
        } 
    } 
}
