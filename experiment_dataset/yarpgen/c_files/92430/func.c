/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92430
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
    var_19 ^= ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))), (((unsigned int) (unsigned short)17782))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) min((max((((/* implicit */unsigned int) max((var_17), (((/* implicit */short) (signed char)64))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2720))))))), (((/* implicit */unsigned int) ((unsigned short) (+(3842895312U)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((unsigned int) (short)15077))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(var_0))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)2704))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_1 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -113307578)) ? (arr_5 [i_1] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-31)))))) : (3ULL))))))));
            var_22 |= ((/* implicit */short) max((((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned int) var_6)), (arr_6 [i_1] [i_2 + 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -319909838)))))), ((+(arr_5 [i_2] [i_1])))));
        }
        arr_7 [i_1] = ((/* implicit */long long int) min((((arr_5 [i_1] [i_1]) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)1805))))))), (((/* implicit */unsigned int) arr_4 [i_1]))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_1]))))), (min((arr_3 [i_1]), (((/* implicit */unsigned int) (short)-2720))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (min(((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (14282634284084417413ULL))), (((/* implicit */unsigned long long int) (unsigned short)32034))))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    {
                        var_24 = max((((/* implicit */unsigned int) (unsigned short)33517)), (var_0));
                        var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)33)) ? (min((max((var_13), (var_13))), (((var_0) + (var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45110))) : (min((3659737613U), (((/* implicit */unsigned int) (short)-14218)))))), (min((((/* implicit */unsigned int) var_6)), (((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((unsigned short) (+(((/* implicit */int) (unsigned char)255))));
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-14245), (((/* implicit */short) (signed char)6))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) var_5))))) : (max((2905972578U), (((/* implicit */unsigned int) var_14))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_16)))))));
}
