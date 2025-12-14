/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60767
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)179)) / (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 6686084238322885174LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_0]))))));
        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (unsigned char)180))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)26)))))))));
        arr_7 [i_1] [i_1] = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58880))) > (arr_3 [i_1] [i_1])));
    }
    for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)179)))))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_12 *= ((unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)2)), ((unsigned short)37124)));
            arr_13 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) arr_5 [(unsigned char)18] [(unsigned char)18]);
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_18 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)37124))))) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 1]))));
            arr_19 [14LL] = (signed char)127;
        }
        arr_20 [i_2] [i_2] = ((/* implicit */unsigned char) ((5027039614949449852LL) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)211)) & (((/* implicit */int) ((unsigned char) var_4))))))));
        arr_21 [13ULL] = ((/* implicit */unsigned char) (!((!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)67))))))));
    }
    for (int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        arr_24 [i_5] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-127)) + (2147483647))) >> (((((/* implicit */int) (short)-4601)) + (4604)))))) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (((~(-432667613160007086LL))) <= (((/* implicit */long long int) var_2)))))));
        arr_25 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3527332223U)) ? (9223372036854775807LL) : (((/* implicit */long long int) (~(((/* implicit */int) max(((signed char)(-127 - 1)), ((signed char)-127)))))))));
    }
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (~((+(((((/* implicit */int) var_3)) ^ (((/* implicit */int) (unsigned short)4934)))))))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned char) ((signed char) var_3)))));
}
