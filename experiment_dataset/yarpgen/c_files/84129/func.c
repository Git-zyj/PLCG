/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84129
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((+(var_1))) : (var_1)))));
                            var_18 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)29692))));
                            var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)29688))))))), (max((var_7), (3661531812719690922LL)))));
                            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_13))))));
                        }
                        for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))))));
                            arr_16 [i_0] [(unsigned short)0] [i_2 + 1] [i_3] [i_3] [(short)15] = ((/* implicit */_Bool) min((((int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)29692))))), (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)141)))) + ((+(((/* implicit */int) (short)-23679))))))));
                            arr_17 [i_0] [i_0] [(unsigned char)12] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1)))))), ((-(var_7)))))) ? (max((((/* implicit */int) arr_13 [i_5] [i_3] [i_2 - 1] [(signed char)9] [i_0])), ((-(610014570))))) : (((((/* implicit */int) var_4)) - (((((/* implicit */int) (signed char)-58)) & (((/* implicit */int) (unsigned short)35867))))))));
                            var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) (_Bool)1))), (8901180007592326808LL)))) ? (min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)29688)) : (((/* implicit */int) var_12)))), (((/* implicit */int) max(((unsigned short)26626), (((/* implicit */unsigned short) (signed char)8))))))) : (min((((/* implicit */int) var_8)), (min(((-2147483647 - 1)), (((/* implicit */int) (short)-32739))))))));
                            arr_18 [12ULL] = ((/* implicit */short) min(((!(((/* implicit */_Bool) min((var_10), ((unsigned char)227)))))), (((((/* implicit */int) (unsigned char)210)) < (((/* implicit */int) max((((/* implicit */unsigned short) (short)-30119)), (var_12))))))));
                        }
                        var_23 &= ((/* implicit */short) -736999196197171337LL);
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min(((unsigned char)202), (((/* implicit */unsigned char) var_8))))), ((+(-736999196197171337LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_13)))) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) min(((short)0), (((/* implicit */short) (signed char)96))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_2 + 2] [i_2 + 2] [i_2])), (min((((/* implicit */long long int) var_8)), (var_7)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 433477274)) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-32477))))) : (min((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_0] [i_0] [i_2 + 1] [i_2 + 1])), (arr_12 [i_2 - 1])))))));
                    }
                    var_26 = ((/* implicit */short) min((((/* implicit */int) ((signed char) (short)-30723))), (min(((-(((/* implicit */int) arr_15 [i_0] [i_1])))), (arr_1 [i_1] [i_2 - 1])))));
                    var_27 = ((/* implicit */unsigned char) arr_1 [i_0] [4U]);
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) ((min((min((((/* implicit */int) (unsigned char)196)), (var_1))), (max((((/* implicit */int) var_0)), (2018216133))))) | (((/* implicit */int) var_12))));
    var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)0))));
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        for (short i_7 = 2; i_7 < 14; i_7 += 4) 
        {
            {
                arr_26 [0ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30723))));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) <= (((var_7) << (((((/* implicit */int) var_11)) - (14)))))));
                var_31 = (short)9792;
            }
        } 
    } 
}
