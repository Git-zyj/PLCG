/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84525
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
    var_12 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [(unsigned short)11] [(unsigned short)11])), (var_1)))) > (((/* implicit */int) (signed char)97))))) - (((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) (unsigned short)54635))))) | (((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned short)30091))))))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2])) << (((var_3) + (961228101)))));
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */int) var_10);
                        var_16 &= ((/* implicit */unsigned long long int) -344311392);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 2; i_4 < 21; i_4 += 1) 
                    {
                        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 11534208360195047271ULL)) ? (((/* implicit */int) (unsigned short)40508)) : (((/* implicit */int) (short)(-32767 - 1))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                        var_17 *= ((/* implicit */unsigned char) arr_10 [(signed char)4] [i_0] [8ULL] [i_0] [(signed char)4]);
                    }
                }
            } 
        } 
    } 
}
