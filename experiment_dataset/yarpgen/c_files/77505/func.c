/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77505
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 364006444U)) ? (364006444U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                    var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) arr_3 [i_0])))) : ((-(((/* implicit */int) var_7))))));
                    arr_7 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(364006465U)))) ? (((((/* implicit */_Bool) 364006474U)) ? (3930960850U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : ((+(364006479U)))));
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) (+(((var_1) / (((/* implicit */long long int) 364006426U))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        var_16 = ((/* implicit */long long int) var_8);
        arr_10 [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65408)) - (arr_2 [i_3])))) ? (((((/* implicit */_Bool) 3930960859U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (3930960841U))) : (arr_5 [i_3 + 1] [i_3 + 1] [(unsigned short)2]))) + (max((((((/* implicit */_Bool) 364006456U)) ? (arr_1 [i_3 - 1] [i_3 - 1]) : (var_8))), (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (3930960831U)))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((364006426U) > (((/* implicit */unsigned int) var_3)))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (364006465U))) != ((~(364006465U))))))));
    }
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 22; i_4 += 4) 
    {
        arr_13 [i_4 - 1] [i_4 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_11 [i_4 - 1]) : (((/* implicit */int) (unsigned char)144))));
    }
    var_19 = ((/* implicit */_Bool) ((3930960831U) * (((((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) / (((((/* implicit */_Bool) 3930960831U)) ? (364006473U) : (var_6)))))));
}
