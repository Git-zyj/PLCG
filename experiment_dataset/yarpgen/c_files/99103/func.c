/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99103
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
    var_10 = ((/* implicit */unsigned int) var_7);
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (var_5))) % (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) var_3))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0 + 2] [i_0 + 2] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))))), ((unsigned short)57325)));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_1 [i_2]) < (min((arr_7 [0U] [0U] [i_2] [0U]), (arr_6 [i_0] [i_1 + 1] [i_1] [(_Bool)1]))))))));
                    var_14 = ((/* implicit */unsigned char) ((unsigned int) var_7));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_3])) : (var_1)))))) ? (702115530U) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_1])))))));
                    var_16 ^= ((/* implicit */unsigned int) var_9);
                }
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_15 [i_1] [i_0 + 2] [i_0 + 2] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
                    arr_16 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_3 [i_1 + 1] [9U] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? (arr_3 [i_1 + 1] [i_1] [(unsigned short)5]) : (arr_3 [i_1 + 1] [i_1 + 1] [(unsigned short)4]))) : ((~(arr_3 [i_1 + 1] [i_1 + 1] [i_1])))));
                }
                var_17 = arr_4 [i_1] [i_0 + 1];
                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned short)8))))) : (arr_2 [i_0] [4U] [(unsigned char)4])))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1])), (5097736752572063955ULL))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65535)), (4045364154U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1353940209U)) && (((/* implicit */_Bool) arr_14 [i_0] [i_1 + 2] [(_Bool)1] [i_0]))))) : (((/* implicit */int) ((unsigned short) var_4)))))));
                arr_17 [i_1] [7ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5385524486020372045ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4074853908399101221ULL)))) || (((arr_13 [(unsigned char)8] [i_1] [i_1 + 1] [(unsigned char)8]) && (((/* implicit */_Bool) var_1))))));
            }
        } 
    } 
}
