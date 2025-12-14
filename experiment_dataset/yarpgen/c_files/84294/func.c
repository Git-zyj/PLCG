/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84294
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [(unsigned char)10] [i_2] [(signed char)0] [i_2] = ((/* implicit */signed char) max(((((~(((/* implicit */int) arr_1 [i_0])))) | ((~(((/* implicit */int) arr_6 [i_2] [i_2] [i_2])))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2])))))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_1])) ? (5440919941982131209ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [(signed char)11] [i_2]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-29148)), (arr_3 [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))))) : (((((/* implicit */_Bool) ((arr_3 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17)))))) ? (((/* implicit */int) min((arr_6 [i_0] [4LL] [4LL]), ((unsigned char)146)))) : (((/* implicit */int) max(((unsigned char)110), (((/* implicit */unsigned char) var_14)))))))));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+((-(((/* implicit */int) var_9)))))))));
                    var_18 = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) (unsigned short)28189)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [5U])))))) : (((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [11U] [11U] [i_2] [11U]))) : (var_10))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)255)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)7])) ? (var_7) : (((/* implicit */int) arr_6 [4U] [(unsigned char)10] [i_2]))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (((+(((var_14) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) / (var_7)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))))));
}
