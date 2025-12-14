/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83706
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1792U)) ? (4294965504U) : (2032U)))) ? (max((max((4294965491U), (((/* implicit */unsigned int) (short)29971)))), (((/* implicit */unsigned int) ((_Bool) var_4))))) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((18446744073709551610ULL) > (((/* implicit */unsigned long long int) 1792U))));
        arr_4 [i_0] = ((/* implicit */short) (((~(2019U))) == (((/* implicit */unsigned int) ((int) arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) arr_6 [i_1])) : (var_10)))));
        var_11 += ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))) ? (arr_6 [i_1 - 2]) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (arr_5 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (_Bool)1))))))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (+(1792U))))));
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_0 [i_3] [i_4]))))))));
            var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29971))) : (((((/* implicit */_Bool) 1810U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29971))) : (2080374784ULL)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((2514269833U) != (4294965277U)))))))));
            arr_14 [i_3] [i_4] = ((/* implicit */signed char) (-(((arr_12 [i_3] [i_4]) - (arr_12 [i_3] [i_4])))));
        }
        arr_15 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((-1311500245) - (((/* implicit */int) (!((_Bool)1))))))) - (((max((((/* implicit */unsigned long long int) 4294965297U)), (var_1))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)6188)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29965))))))))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) 
    {
        for (long long int i_6 = 2; i_6 < 17; i_6 += 2) 
        {
            for (unsigned int i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), ((!(((/* implicit */_Bool) (~(max((((/* implicit */int) (signed char)-10)), (var_9))))))))));
                    var_18 ^= max((arr_21 [i_5 + 1] [i_6 + 2] [i_7 - 1]), (((/* implicit */unsigned long long int) ((signed char) arr_21 [i_5 + 1] [i_6 + 1] [i_7 - 1]))));
                    var_19 -= ((/* implicit */short) var_8);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-2147483647 - 1))) ^ (((arr_26 [i_8]) ? (arr_25 [i_8] [i_8]) : (arr_25 [i_8] [i_8])))))) ? (((((/* implicit */_Bool) ((13005662236528227668ULL) & (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((/* implicit */unsigned long long int) ((arr_25 [i_8] [i_8]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8])))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 496373769921022726LL)) : (16226960241147386703ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32741))))) ? (((((/* implicit */_Bool) -4749399917219304174LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25943))) : (2644617601U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8]))))))));
        var_21 = (~((~(589226927U))));
    }
    var_22 *= ((/* implicit */unsigned char) var_0);
    var_23 *= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4294967289U)))) - (var_1))));
}
