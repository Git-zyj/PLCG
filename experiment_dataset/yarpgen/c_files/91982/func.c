/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91982
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)236)) != (((/* implicit */int) (unsigned char)238))))) : ((+(((/* implicit */int) (unsigned char)20))))))) ^ (((3453946987860382323ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151)))))));
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) 7663750293164148934LL);
                            arr_13 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100))) : (((((/* implicit */_Bool) 2975325842U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (2975325842U)))))));
                            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((max((((/* implicit */long long int) (unsigned short)34384)), (-8760166977320793791LL))) | (((/* implicit */long long int) max((4174799566U), (((/* implicit */unsigned int) -2039445638))))))))));
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */long long int) (((-(1319641453U))) != (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3647)) + (((/* implicit */int) (unsigned char)136)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (int i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 3; i_5 < 20; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) (-(-433655992)));
                    var_20 = ((/* implicit */signed char) max((17143201946567597314ULL), (((/* implicit */unsigned long long int) (+(max((2916602912U), (((/* implicit */unsigned int) (unsigned char)234)))))))));
                }
            } 
        } 
        arr_23 [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (signed char)-62)))))));
    }
}
