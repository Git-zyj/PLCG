/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98000
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13140))) : (509830715U)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((arr_0 [i_0]), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((/* implicit */long long int) ((509830715U) / (((unsigned int) 384618539U))))) : (max((((((/* implicit */_Bool) 3910348751U)) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_2))), (((/* implicit */long long int) arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 4; i_1 < 13; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) max((3910348728U), (((/* implicit */unsigned int) var_8))))) ? (((((/* implicit */_Bool) 3910348728U)) ? (arr_0 [0ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1334914966U))))))))))));
        var_13 = ((/* implicit */unsigned char) min(((~(14034570887510990742ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 258396466)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))) > (((((/* implicit */long long int) arr_0 [8ULL])) / (var_10))))))));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7720)) ? (3910348764U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40)))))) | (arr_5 [i_2] [i_2])));
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(var_2)))) || (((/* implicit */_Bool) ((15973693146639328291ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))))))) ? ((~(arr_5 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) (+(384618560U))))));
        var_15 = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) arr_0 [i_2])) * (2303890208809186715ULL))));
        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_5 [i_2] [i_2]))))))), (min((((/* implicit */unsigned int) 258396466)), (3026857517U)))));
    }
    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        arr_10 [i_3] [i_3] |= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (+(2147483647))))))), (((((/* implicit */int) arr_9 [i_3] [i_3])) ^ (((/* implicit */int) arr_9 [i_3] [i_3]))))));
        var_17 = ((/* implicit */signed char) max((var_3), (((/* implicit */unsigned long long int) var_7))));
        arr_11 [i_3] = ((/* implicit */unsigned short) var_5);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_3 [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (arr_3 [i_3] [i_3]) : (var_10))) : (((((/* implicit */_Bool) var_9)) ? (arr_3 [i_3] [i_3]) : (arr_3 [i_3] [i_3])))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_3)))))));
    }
    var_20 &= (-(((int) var_9)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) / (((/* implicit */int) var_7))))) / (var_10)));
}
