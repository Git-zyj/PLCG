/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66206
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) (~(((/* implicit */int) var_15))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)30))) | (558551906910208LL)))))));
                    arr_10 [6U] [6U] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((_Bool) ((unsigned char) ((((/* implicit */int) (unsigned short)32768)) | (((/* implicit */int) (unsigned short)25363))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((max((((/* implicit */long long int) var_8)), (var_14))) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)21)) << (((var_6) + (8211069473007590980LL)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (int i_5 = 3; i_5 < 15; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) 0)), (4294967283U))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)82)) >> (((((/* implicit */int) arr_20 [8] [i_4] [i_6])) - (32))))))))) ? (((((/* implicit */_Bool) (~(4294967295U)))) ? (min((arr_19 [i_3] [i_6] [i_4]), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3 + 1] [i_5 - 3] [i_5 - 1]))))) : ((~(var_13)))));
                        arr_22 [i_6] [i_5] [i_4] [11] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((-268435456), (2140457538)))), (((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */unsigned long long int) 2147483647)) : (14135910862950170893ULL)))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((min((((((/* implicit */unsigned int) -730467730)) & (var_13))), (arr_23 [i_3 - 2] [i_5 - 2] [i_5]))) >> (((((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) ((short) var_11))) : (((/* implicit */int) (unsigned short)33841)))) - (18430))))))));
                        var_20 = ((/* implicit */unsigned long long int) ((max((((unsigned long long int) var_12)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)165)) ? (var_14) : (((/* implicit */long long int) var_0))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_17 [i_3] [i_4] [i_5] [i_4])) : (-2147483632)))) ? (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_12))))) : (((((/* implicit */_Bool) (unsigned short)32768)) ? (var_3) : (((/* implicit */long long int) -661980414)))))))));
                    }
                    var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)3)), (arr_23 [i_3 - 2] [2] [i_3])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_1)) : (7730404027556784535LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_20 [i_3] [i_4] [i_4]), (arr_12 [i_3])))))))), (((((((/* implicit */_Bool) 1185495962U)) ? (1097364144128ULL) : (((/* implicit */unsigned long long int) var_6)))) + (((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (21))))))));
                }
            } 
        } 
    } 
}
