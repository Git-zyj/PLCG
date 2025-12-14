/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6401
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
    var_11 |= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (unsigned char)103)))))) | (((((var_6) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))))) ^ (((((-5725430488690034926LL) | (var_3))) | (((((/* implicit */_Bool) 5725430488690034940LL)) ? (-5725430488690034910LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_12 += ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)0)) ? (5725430488690034941LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_13 *= ((/* implicit */unsigned char) 1478112645542347859ULL);
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1723064681U)) ? (max((((/* implicit */long long int) arr_1 [i_1] [i_1])), (-5725430488690034915LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_8) : (((/* implicit */int) ((((/* implicit */_Bool) 3301173105199017245ULL)) || (((/* implicit */_Bool) 83067942161183762ULL))))))))));
        arr_7 [i_1] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (5725430488690034926LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1641194956074141633ULL)))) : (((((/* implicit */_Bool) (unsigned char)238)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_1]), (var_9)))) ? ((~(11051496860397263763ULL))) : (((/* implicit */unsigned long long int) (~(-1032607890))))));
        var_16 &= ((/* implicit */unsigned long long int) (((-(arr_4 [i_1]))) - (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) var_9)) != (16281894109660851010ULL)))))));
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_17 *= (!(((/* implicit */_Bool) min((var_2), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-9))))))));
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 13))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) * (((unsigned long long int) (unsigned char)220)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_4))))))))));
        }
        var_19 = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)200)) >> (((/* implicit */int) (!((_Bool)1))))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned char)52)))))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((11034666908399067509ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (arr_1 [i_4] [i_4]))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 16; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_22 += ((/* implicit */int) ((_Bool) arr_26 [i_4] [i_5] [i_6] [i_4] [i_8]));
                                var_23 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) | (-1935966528)))) ^ (arr_4 [i_5])));
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */unsigned char) ((unsigned long long int) 3581583730U));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (547414966U))))));
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (+(((long long int) 1596017852806439507ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        for (long long int i_10 = 4; i_10 < 13; i_10 += 2) 
                        {
                            {
                                var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 6937870551861343590ULL)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (_Bool)0))));
                                arr_31 [i_5] [i_5 + 1] [i_6] [i_9] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_5] [i_5 - 1] [11U] [i_5])) ? (arr_21 [i_5] [i_5 - 1] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65529)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_15 [i_4])))))));
    }
}
