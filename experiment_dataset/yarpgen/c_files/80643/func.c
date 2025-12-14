/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80643
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
    var_19 -= ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), ((~(((/* implicit */int) (signed char)-16))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) ((var_9) ? (1464323589U) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_15) || (((/* implicit */_Bool) ((unsigned char) (short)14)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_20 ^= ((/* implicit */short) ((unsigned int) arr_3 [i_1] [i_4]));
                                var_21 = ((/* implicit */unsigned int) arr_2 [i_0] [i_1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_5 - 1] [i_6] = ((/* implicit */int) (_Bool)1);
                                var_22 += ((/* implicit */short) min((((/* implicit */long long int) 605188140U)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [4LL] [i_6] [i_6] [4LL])) ? (2830643700U) : (1464323610U)))) ? (((((/* implicit */_Bool) (short)6491)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_4 [i_0 - 2] [i_1 - 2] [i_1 - 2]))) : (((/* implicit */long long int) var_8))))));
                                arr_20 [i_0] [i_5 - 1] [i_0] = ((/* implicit */_Bool) (unsigned short)42500);
                            }
                        } 
                    } 
                    arr_21 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned char)2)))))));
                }
                for (short i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */short) (+((-(((/* implicit */int) (_Bool)1))))));
                    arr_24 [i_0 + 1] [i_1] [i_0] = (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])));
                    arr_25 [i_0] [i_1] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7)) && (((/* implicit */_Bool) (-(arr_14 [i_0] [i_1 - 1] [i_1 - 1]))))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0 + 2] [i_0] [(_Bool)0] [i_7]))) < (min(((~(1809159570U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (short)-32))))))))))));
                }
                for (short i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                {
                    arr_30 [i_0 - 1] [i_0] [(_Bool)1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)206)) ? (1632275991) : (((/* implicit */int) (_Bool)1))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-1632275993)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)3)) - (((/* implicit */int) var_5))))) : (((arr_26 [i_0 - 1] [i_0 - 3]) ? (arr_4 [i_0] [i_0 - 3] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                    var_26 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) -1632276012)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)28))) - (1809159573U))) : (1809159545U))), (1464323612U)));
                    var_27 = ((/* implicit */long long int) (~(2830643694U)));
                    var_28 = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (-5920672254362222967LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39734))))))) ? ((~(arr_4 [18U] [i_0 + 2] [i_1 - 1]))) : (((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-11))))))));
                }
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 621054007U)) ? (((/* implicit */long long int) -1632275993)) : (-714460946799017240LL)))) || (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (unsigned short)9882)) : (((/* implicit */int) var_2)))) : (max((((/* implicit */int) ((((/* implicit */int) (short)31744)) < (((/* implicit */int) arr_15 [i_0 - 3]))))), (var_17))))))));
            }
        } 
    } 
}
