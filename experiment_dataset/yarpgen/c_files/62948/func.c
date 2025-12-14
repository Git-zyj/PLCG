/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62948
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-3649)), (arr_0 [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) ^ (arr_0 [i_0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (min((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (min((1837783349U), (((/* implicit */unsigned int) (unsigned short)18532))))))));
        var_12 = ((/* implicit */unsigned char) ((max((arr_1 [(unsigned short)15]), (((/* implicit */unsigned long long int) var_5)))) << (((min((-201702053597139284LL), (((/* implicit */long long int) (_Bool)1)))) + (201702053597139287LL)))));
        var_13 = ((/* implicit */_Bool) var_4);
    }
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_7))));
    /* LoopNest 3 */
    for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (short)14767)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48819))))) : (((((/* implicit */_Bool) (unsigned short)50372)) ? (((/* implicit */unsigned long long int) 1029713516U)) : (537955548045824486ULL)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) : (var_6)))))) : (min((max((var_3), (537955548045824486ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17908788525663727129ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (152112591U))))))));
                    var_15 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_1])))))));
                }
            } 
        } 
    } 
    var_16 = (+((+(var_4))));
}
