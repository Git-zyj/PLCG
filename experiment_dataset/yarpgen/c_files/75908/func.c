/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75908
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((long long int) var_4))) ? ((~(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (var_4))))))))));
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)-78)), (arr_2 [5ULL])))))));
            arr_5 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_12))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (short)23676)))))) : (((((/* implicit */long long int) (+(arr_0 [i_0])))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_1 [i_0])))))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-23670)) ? (((/* implicit */int) (short)23676)) : (((/* implicit */int) (unsigned short)32220))));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)52);
        arr_8 [i_0] = ((/* implicit */short) 200876530755578108ULL);
    }
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 20; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (signed char)-78)))) ? (arr_12 [i_2 + 1] [i_3] [i_2 + 1]) : (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
                    arr_17 [i_4 - 1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */int) (short)-12341)) / (((/* implicit */int) (short)-4107)))), (((/* implicit */int) (signed char)-78))));
                    arr_18 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (1103809845) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) (signed char)-108))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)29983)) : (((/* implicit */int) var_13))))) ? (max((3651619174U), (((/* implicit */unsigned int) (short)-23670)))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (var_6)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((-1106628049270964966LL) & (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                    arr_19 [i_2] [i_3] [i_3] = ((/* implicit */short) min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) (unsigned short)0))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */int) (short)-16885))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_6)))))) : (((var_10) | (((/* implicit */long long int) ((/* implicit */int) var_15))))))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
    var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_9)) : (max((((/* implicit */int) var_15)), (var_17)))))));
}
