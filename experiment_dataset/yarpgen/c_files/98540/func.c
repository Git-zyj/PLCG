/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98540
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
    var_20 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))) : (((long long int) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (long long int i_3 = 4; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */int) ((short) arr_7 [i_0] [i_0]));
                        arr_14 [i_0] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) (~((+(arr_13 [i_3 - 2] [i_3] [i_3] [i_3])))));
                        var_22 = ((/* implicit */unsigned short) ((long long int) min((arr_13 [i_0] [i_0] [i_0] [i_0]), (arr_13 [i_1] [i_1] [i_1] [i_1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) arr_7 [i_0] [i_0]);
                            arr_19 [i_0] [i_0] [i_3] [i_0] [i_3] [i_3] = ((var_0) << ((((+(((/* implicit */int) arr_0 [i_0] [i_0])))) - (1))));
                            var_23 = (i_3 % 2 == 0) ? (((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))) & (arr_2 [i_4] [i_4]))) < (arr_5 [i_0])))), (((arr_12 [i_0] [i_3] [i_0] [i_4 + 1] [i_0] [i_0]) >> (((arr_12 [i_0] [i_3] [i_3] [i_4 + 1] [i_0] [i_0]) - (2926062813U)))))))) : (((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))) & (arr_2 [i_4] [i_4]))) < (arr_5 [i_0])))), (((arr_12 [i_0] [i_3] [i_0] [i_4 + 1] [i_0] [i_0]) >> (((((arr_12 [i_0] [i_3] [i_3] [i_4 + 1] [i_0] [i_0]) - (2926062813U))) - (3585294779U))))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_16))) / (((/* implicit */int) ((unsigned short) (short)-24899)))))) <= ((+(((arr_0 [i_0] [i_0]) ? (945404975U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))))));
                        }
                        arr_20 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */int) arr_10 [i_3] [i_3] [i_3 - 1] [i_3]);
                    }
                } 
            } 
        } 
    }
    for (long long int i_5 = 1; i_5 < 13; i_5 += 2) 
    {
        var_25 = ((/* implicit */signed char) ((_Bool) arr_16 [i_5] [i_5 + 2] [i_5] [i_5 + 2] [i_5] [i_5 + 2] [i_5]));
        arr_24 [i_5] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5]))) - (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) % (min((var_3), (arr_5 [i_5]))))));
        var_26 &= ((/* implicit */unsigned long long int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]);
        var_27 ^= ((/* implicit */unsigned char) ((((((((/* implicit */int) (short)-24914)) > (arr_17 [i_5] [i_5] [i_5] [2LL] [i_5] [i_5] [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (var_8))))) : (((unsigned int) var_4)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)24898)) ? (arr_5 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_5]))))))))));
        arr_25 [i_5] = ((/* implicit */long long int) arr_4 [i_5]);
    }
    var_28 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)16)) | (((/* implicit */int) (short)3922)))) << (((((/* implicit */int) (unsigned char)239)) - (235)))));
}
