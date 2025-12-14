/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69600
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
    var_16 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_15)))), ((~(((/* implicit */int) min((var_4), (var_4))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_17 = ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (short)3796))))) : (min((((/* implicit */long long int) arr_0 [i_0])), (-7547429455102780887LL)))));
                        var_18 = ((/* implicit */unsigned short) max((max((arr_1 [i_1 + 2]), (arr_1 [i_1 + 2]))), (min((arr_1 [i_1 - 4]), (arr_1 [i_1 - 1])))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) max((((signed char) (unsigned short)1)), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_4] [i_4])) || (((/* implicit */_Bool) arr_19 [i_5] [i_6])))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_0] [i_4] [i_4] [i_5] [(signed char)12])), ((~(((/* implicit */int) var_13))))))) ? (max((min((var_14), (((/* implicit */long long int) (short)(-32767 - 1))))), (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_4] [i_5] [i_6] [8])) || (((/* implicit */_Bool) arr_8 [i_0]))))))));
                    }
                } 
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        arr_25 [i_7] = ((/* implicit */unsigned short) arr_13 [(signed char)19] [(signed char)19] [i_7]);
        arr_26 [i_7] [i_7] = ((/* implicit */long long int) (unsigned short)6534);
        var_21 = ((/* implicit */int) (short)(-32767 - 1));
        var_22 = ((/* implicit */long long int) max((((/* implicit */int) var_10)), ((-(26)))));
    }
}
