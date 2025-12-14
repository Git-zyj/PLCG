/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65147
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((var_5) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) && (((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)46)))) * (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_0);
                var_15 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])), (arr_1 [i_0] [i_1])))))) != (((((_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) (short)-29306)))))));
            }
        } 
    } 
    var_16 = var_4;
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        for (unsigned int i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_6 [i_3 - 2] [i_3 + 2]), (arr_6 [i_3 - 1] [i_3 + 2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [7LL])) ? (arr_8 [i_3]) : (var_4)))) ? ((+(1073741823))) : (((((/* implicit */_Bool) arr_7 [i_3] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) ((unsigned int) arr_8 [i_2 + 4]))) ? (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1))) : ((-(arr_8 [i_3])))))));
                var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (417880006258296206LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_2] [i_2]))))))) && (((/* implicit */_Bool) min((var_8), (max((arr_7 [i_3] [(unsigned short)1]), (((/* implicit */short) var_10)))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_4 = 3; i_4 < 12; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    var_19 ^= ((/* implicit */_Bool) (-((~(var_6)))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) <= ((+(((/* implicit */int) arr_11 [i_4] [i_5])))))))));
                }
            } 
        } 
        var_21 -= ((/* implicit */int) arr_11 [i_4 - 3] [i_4 + 1]);
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(arr_6 [i_4 - 1] [i_4 + 1]))))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) arr_7 [i_4 - 1] [i_4 - 2]))));
    }
    for (long long int i_7 = 2; i_7 < 9; i_7 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) ((min((arr_19 [i_7 - 1]), (arr_19 [i_7 - 1]))) <= (min((arr_19 [i_7 - 1]), (arr_19 [i_7 - 1])))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            for (unsigned int i_9 = 2; i_9 < 7; i_9 += 4) 
            {
                {
                    var_25 = ((/* implicit */signed char) ((((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_7] [i_9])))), (((((/* implicit */_Bool) arr_1 [10] [10])) ? (((/* implicit */int) arr_17 [i_8] [i_8] [(short)2])) : (arr_22 [i_7] [i_8] [i_7]))))) + (2147483647))) << (((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_4 [i_7 - 2] [i_7 - 2])) : (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))) - (146)))));
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)353))))) > (((unsigned int) var_10)))))));
                    var_27 -= ((/* implicit */unsigned int) ((arr_12 [i_7 + 1]) ^ (((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >> (((((/* implicit */int) arr_15 [i_8] [i_9 + 3])) - (5719)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_10 = 2; i_10 < 9; i_10 += 1) /* same iter space */
    {
        var_28 = ((unsigned int) (~(var_9)));
        var_29 = ((/* implicit */unsigned short) (+(((1292524843U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [11U] [i_10])))))));
    }
}
