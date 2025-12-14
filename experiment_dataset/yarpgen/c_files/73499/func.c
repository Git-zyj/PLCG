/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73499
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_17))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                arr_6 [i_0] = ((/* implicit */short) var_7);
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 11; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (signed char i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) arr_9 [i_2]);
                    arr_14 [i_2 + 1] [i_3] [i_4] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_5)), (2413635577U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((min(((signed char)-25), (var_11))), (min((arr_4 [i_3] [i_3]), (var_5)))))))));
                    var_22 = ((/* implicit */unsigned short) arr_13 [i_2] [i_3] [i_4 + 2]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 1; i_5 < 8; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) >> (((((/* implicit */int) arr_4 [(unsigned short)6] [(unsigned short)6])) - (77))))) + (((/* implicit */int) ((((/* implicit */int) (signed char)-93)) == (((/* implicit */int) arr_13 [i_5] [2U] [(signed char)6])))))))) ? ((-(((((/* implicit */_Bool) (unsigned short)51287)) ? (7606943303642957335ULL) : (((/* implicit */unsigned long long int) 2413635560U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13439))))))));
                        var_24 = ((/* implicit */_Bool) var_13);
                        var_25 ^= ((/* implicit */unsigned int) (short)-25218);
                    }
                } 
            } 
        } 
        arr_27 [i_5 + 1] [i_5 + 1] = ((/* implicit */_Bool) (signed char)-30);
        arr_28 [i_5] [i_5] = ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_21 [(_Bool)1] [i_5 + 1] [i_5]), (arr_21 [(signed char)2] [i_5 - 1] [i_5 - 1]))))) == (max((max((var_6), (((/* implicit */unsigned int) (unsigned short)51287)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)82))))))));
        arr_29 [i_5] = ((/* implicit */_Bool) (signed char)52);
    }
}
