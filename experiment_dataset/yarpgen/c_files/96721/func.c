/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96721
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
    var_11 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (min((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) var_10))))), (((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) == (arr_1 [i_0])))), (((3267167429U) >> (((arr_6 [16LL]) - (507492814U)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))) : ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [12U]))) - (2163282883U)))))))));
                    arr_8 [5U] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) & (max((3267167429U), (((/* implicit */unsigned int) (unsigned short)60822))))))) - (((unsigned long long int) arr_1 [i_2 + 1])));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_10 [i_3]), (arr_10 [i_3]))))))) == (((/* implicit */int) (unsigned short)4727))));
        var_14 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)4723))))), (2780995931232398760ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-23639)))))))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((arr_10 [15ULL]) * (arr_10 [i_3])))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32749)) / (((/* implicit */int) arr_9 [i_3]))))), (max((4539823955210703711ULL), (arr_10 [i_3]))))) : (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (short)-32766)))), (((/* implicit */int) max((((/* implicit */short) arr_9 [i_3])), ((short)32749)))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        var_16 = ((/* implicit */_Bool) (-(((unsigned long long int) (!(arr_9 [i_4]))))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 1; i_6 < 21; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        var_17 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((unsigned char) (unsigned short)60822))) >> (((max((-9223372036854775796LL), (((/* implicit */long long int) arr_13 [18U] [i_7 + 1])))) - (246LL)))))));
                        arr_20 [(unsigned char)20] [(unsigned char)20] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((3028347142856014157ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48)))))) || (((/* implicit */_Bool) ((unsigned int) arr_10 [i_6 + 1])))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (short)-32763)) ? (max((((4294967295U) >> (((/* implicit */int) (signed char)4)))), (((/* implicit */unsigned int) ((signed char) arr_11 [i_4] [i_4]))))) : (19265371U))))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) max(((-(((unsigned int) 3742474899U)))), (((/* implicit */unsigned int) ((((unsigned long long int) var_8)) == (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)17620)), (var_0)))))))));
    var_20 = ((/* implicit */signed char) max((((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_0)), (2780995931232398749ULL))) == (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned int) (_Bool)1)))))))), (((short) ((((/* implicit */int) (signed char)-26)) == (((/* implicit */int) var_9)))))));
}
