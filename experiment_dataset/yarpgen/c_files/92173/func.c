/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92173
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_20 += ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)37))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 8822546894829716949ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)3086))))) : (((((/* implicit */_Bool) 2757269378U)) ? (var_2) : (((/* implicit */int) arr_0 [i_0]))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) || ((!(((/* implicit */_Bool) (signed char)-9))))))))));
        var_22 = ((((/* implicit */_Bool) arr_1 [6U])) ? (arr_1 [i_0]) : (min((((/* implicit */unsigned long long int) (signed char)-39)), (arr_1 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (unsigned short i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    {
                        var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((short) ((unsigned int) (unsigned char)225)))), (((((/* implicit */_Bool) 1488498825U)) ? (arr_11 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1] [i_4 + 1])))))));
                        var_24 += ((/* implicit */signed char) min((((/* implicit */unsigned int) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((3378833669U) - (3378833669U)))))), ((+(((((/* implicit */_Bool) (unsigned char)73)) ? (916133626U) : (3779153552U)))))));
                        var_25 = ((/* implicit */long long int) (~(((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)32586)))), (arr_8 [i_3] [i_2 - 1] [3ULL] [i_2 - 3]))))));
                    }
                } 
            } 
        } 
        var_26 = arr_9 [i_1] [i_1] [i_1] [i_1];
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)23895), (((/* implicit */short) (unsigned char)121))))))));
    var_28 += ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
}
