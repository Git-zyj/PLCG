/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98238
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
    var_16 = ((/* implicit */int) var_15);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_1 - 4] [i_1 + 1] [i_0] = ((/* implicit */signed char) max((var_0), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 4])))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((int) var_11)) + (((/* implicit */int) ((signed char) arr_1 [i_0 - 2])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) var_7))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_15)))) ? ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)173)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)31)))))))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((unsigned char) var_1)))) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (short)24984)))) : (((/* implicit */int) ((((/* implicit */_Bool) 2985200857U)) || (((/* implicit */_Bool) var_12)))))))) : (min((((unsigned int) var_1)), (((/* implicit */unsigned int) max(((unsigned char)101), (((/* implicit */unsigned char) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((_Bool) var_11))))))));
                                var_20 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_8 [i_3] [i_7 - 1])) ^ (((/* implicit */int) arr_11 [i_7 + 1] [i_7 + 1] [i_7 - 1])))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_13 [i_7 - 1] [i_7 + 1] [i_7 + 1])) : (arr_2 [i_7 + 1]))) == (((/* implicit */long long int) arr_13 [i_7 + 1] [i_7 + 1] [i_7 + 1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_8 = 2; i_8 < 9; i_8 += 2) 
                {
                    arr_24 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) var_11));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((unsigned long long int) arr_16 [i_3] [i_4] [i_3] [i_3] [i_8 - 2])) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)196)), (var_10))))))))));
                    arr_25 [i_3] [i_4] [i_8] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 262983872)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (unsigned char)186))))) + (((((/* implicit */_Bool) arr_21 [i_4] [i_8])) ? (min((((/* implicit */unsigned int) arr_8 [i_3] [i_3])), (755527379U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))))));
                    var_23 *= ((/* implicit */signed char) max((arr_21 [i_8 - 2] [i_8]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_8 - 1] [i_4]))))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14346))))))));
                }
                var_24 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) max((arr_12 [i_3]), (((/* implicit */unsigned int) (signed char)-31))))) ? (arr_20 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_4] [i_3]))))))));
            }
        } 
    } 
}
