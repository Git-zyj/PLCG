/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59732
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
    var_11 = ((/* implicit */long long int) ((((((_Bool) var_0)) ? (((((/* implicit */_Bool) (short)1840)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-1820))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) - (11258908882040708549ULL)))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)23596)) ? (((/* implicit */int) (short)1840)) : (((/* implicit */int) (short)1840))));
    var_13 = ((/* implicit */int) (!(var_3)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = var_10;
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_1] = ((/* implicit */int) ((((var_0) == (((/* implicit */long long int) ((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775792LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))));
                                arr_13 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_5)) | (((/* implicit */int) var_9))))))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_9))))))) : (((/* implicit */int) max((((/* implicit */short) var_9)), (var_10))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)37))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1840))))))) ? (((/* implicit */int) (short)-1833)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_10)))))))));
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (1048575U)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))));
                arr_16 [i_0 - 3] [12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_10))) ? (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4294967295U))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) (short)1840)) % (((/* implicit */int) var_10)))))))));
            }
        } 
    } 
}
