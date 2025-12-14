/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71186
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned long long int) arr_0 [i_3] [1ULL]);
                            arr_14 [13U] [i_1] [13U] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1242403668))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */unsigned long long int) arr_1 [i_1 - 1])) : ((((!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [16ULL])))))) : (((((/* implicit */_Bool) -1242403667)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))) : (472556851748546550ULL)))))));
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [0U] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3] [i_3] [i_1 + 1] [i_3] [i_3])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [11U]))) : (arr_0 [i_3] [i_2]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1] [i_1]))))))) % (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            var_13 = ((/* implicit */long long int) arr_7 [i_1] [i_3] [i_2] [i_1] [i_1]);
                        }
                        for (unsigned short i_5 = 1; i_5 < 16; i_5 += 4) 
                        {
                            var_14 += ((/* implicit */short) ((1716700472135359259LL) >> (((/* implicit */int) (_Bool)1))));
                            var_15 = ((/* implicit */signed char) var_6);
                        }
                        var_16 = ((/* implicit */long long int) arr_16 [i_1] [i_1] [i_1]);
                        var_17 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_7))))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_10 [i_0] [i_1 + 1] [i_2]))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) (~(((802472085U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46)))))));
    }
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((((/* implicit */_Bool) var_4)) ? (963312379) : (((/* implicit */int) (signed char)46))))))) ? ((((~(var_6))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (var_5))))))) : (((/* implicit */unsigned long long int) (~((~(3396247968U))))))));
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 4; i_9 < 10; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_8] [i_8])) <= (((/* implicit */int) arr_22 [(short)3] [10U]))));
                                var_22 = ((/* implicit */unsigned int) (unsigned short)43783);
                                var_23 = ((/* implicit */_Bool) max((((2147483648LL) * (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6] [(short)5] [i_6]))))), (((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)31)))))))));
                                var_24 = var_7;
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) ((unsigned int) (((_Bool)1) ? (3347398099U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
