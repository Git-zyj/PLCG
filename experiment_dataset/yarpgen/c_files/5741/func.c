/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5741
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
    var_18 ^= ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 3967204843U)) ? (0U) : (0U)));
                        arr_13 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 3967204843U)) ? (((unsigned int) 327762453U)) : (((unsigned int) arr_8 [(unsigned char)17] [i_1] [i_1] [i_1])));
                    }
                } 
            } 
            arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 605731988U)) ? ((-(1200434645U))) : ((-(605731988U)))));
        }
        var_19 = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 386220513U)) ? ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_4 - 1] [i_4 - 1]))) : (1337807116U))))) : (var_10)));
        /* LoopNest 3 */
        for (signed char i_5 = 1; i_5 < 14; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                for (signed char i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))))))));
                        var_22 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_25 [i_4] [i_5] [1U] [i_7]))) >> (((((/* implicit */int) (short)-1)) + (21))))), (((/* implicit */unsigned long long int) (signed char)0))));
                        var_23 ^= ((/* implicit */unsigned int) var_3);
                        arr_26 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) var_8);
                    }
                } 
            } 
        } 
        arr_27 [i_4 - 1] [(short)14] = ((/* implicit */unsigned int) var_5);
        var_24 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((~(1522661103U))), (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)(-32767 - 1))))))))), (((((/* implicit */_Bool) arr_25 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1])) ? ((~(4611681620380876800ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1]))))))));
        var_25 ^= ((/* implicit */unsigned int) ((signed char) max((0U), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)15)))))));
    }
}
