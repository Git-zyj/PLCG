/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89083
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
    var_18 = ((/* implicit */unsigned char) ((_Bool) var_2));
    var_19 = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_5))))), ((-(((/* implicit */int) (short)-10275)))))));
    var_20 |= ((/* implicit */_Bool) ((unsigned short) min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) var_14)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? ((-(((arr_3 [i_0] [i_0]) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) arr_2 [(short)19])))))) : (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        var_22 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_23 *= ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_1])) + (((((/* implicit */_Bool) (unsigned short)14262)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : ((-2147483647 - 1)))))) % ((+(1834712734)))));
            var_24 |= ((/* implicit */short) (unsigned short)58561);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_25 = ((/* implicit */signed char) (short)15218);
            var_26 = ((/* implicit */long long int) (short)-128);
        }
    }
    for (long long int i_3 = 3; i_3 < 16; i_3 += 4) 
    {
        var_27 = min((min((((/* implicit */unsigned char) arr_2 [i_3 + 2])), ((unsigned char)15))), (((/* implicit */unsigned char) ((_Bool) arr_5 [i_3 - 3] [i_3 - 2]))));
        var_28 ^= ((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-103)));
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 17; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_11))))))));
                    var_30 = ((((unsigned int) -7389178730803522940LL)) + (min((arr_9 [i_3 - 2]), (((/* implicit */unsigned int) arr_10 [i_3 - 2])))));
                }
            } 
        } 
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (signed char)4))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_32 = ((/* implicit */short) (signed char)61);
        var_33 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
        arr_19 [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-127)) % (((/* implicit */int) (short)30996))))) ? (((/* implicit */int) arr_2 [i_6])) : (((((/* implicit */int) (short)-25841)) + (((/* implicit */int) (unsigned short)31173)))))), (((/* implicit */int) arr_5 [i_6] [i_6]))));
    }
}
