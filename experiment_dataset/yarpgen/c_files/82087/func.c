/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82087
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_10))));
    var_15 &= ((/* implicit */unsigned char) var_0);
    var_16 = var_13;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) arr_0 [i_0]);
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 549578571)) || (((/* implicit */_Bool) -549578571))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [(signed char)17] [(unsigned short)11]))))), (var_12)));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_9) : (var_9))), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1))))) : (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0]) : (arr_7 [i_0] [i_0] [12ULL] [(_Bool)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) arr_3 [i_0]))))))))));
    }
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_20 += ((/* implicit */unsigned int) arr_1 [i_3]);
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_3) * (var_3))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (8236396631514268289ULL))) : (((/* implicit */unsigned long long int) arr_7 [(unsigned short)12] [i_3] [i_3] [(unsigned short)12])))))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_4 [12LL] [i_3])))))))));
        var_22 = ((/* implicit */unsigned short) (((!(var_0))) ? (min((arr_10 [i_3] [i_3]), ((+(var_7))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) arr_7 [i_3] [i_3] [i_3] [4LL])) : (var_3)))) ? (arr_10 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)14] [i_3] [i_3])))))));
        arr_13 [i_3] = ((min((6370014021050643351ULL), (((/* implicit */unsigned long long int) 1)))) / (((((/* implicit */_Bool) var_13)) ? (arr_6 [i_3] [i_3] [i_3]) : (var_6))));
    }
    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_4])), (arr_6 [i_4] [i_4] [i_4])))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_4])) ? (arr_1 [i_4]) : (((/* implicit */int) arr_5 [i_4] [12LL] [i_4])))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_1 [i_4]))))))))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((1757920456) < (((/* implicit */int) (unsigned char)146)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))) : (536870911U)))) : (max(((-(var_12))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [18ULL] [(signed char)6] [20]))) & (var_4))))))))));
        arr_16 [i_4] |= var_5;
        var_25 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (17169079617274996088ULL))) % (((arr_6 [(signed char)16] [(signed char)0] [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_4])))))));
    }
}
