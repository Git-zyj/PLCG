/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61501
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
    var_12 = (-2147483647 - 1);
    var_13 = (unsigned char)21;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)10654)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? ((+(((((/* implicit */int) (unsigned char)7)) / (650731138))))) : (-409725435)));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_15 = ((/* implicit */int) arr_3 [i_0]);
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (short)-31278)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (short)-31269))))))))));
        }
        for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) /* same iter space */
            {
                arr_12 [i_2] [i_2] = ((((((/* implicit */_Bool) (~(-2124691845)))) ? ((((_Bool)1) ? (-409725436) : (((/* implicit */int) (_Bool)1)))) : (-409725437))) | (((/* implicit */int) (unsigned char)241)));
                arr_13 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((((/* implicit */int) arr_6 [i_0])) * (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */int) (short)-31257)) : (((/* implicit */int) (_Bool)1)))))) % (((/* implicit */int) (short)20728))));
            }
            for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) /* same iter space */
            {
                var_17 = arr_1 [i_2];
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (990502310)))) > (((((/* implicit */int) (unsigned char)168)) - (((/* implicit */int) arr_2 [i_2 + 1] [i_4 + 1])))))))));
            }
            var_19 += ((/* implicit */_Bool) (short)9843);
            var_20 = ((/* implicit */_Bool) max((((/* implicit */int) (short)31268)), (arr_15 [i_0] [i_2 - 1] [i_2 - 1])));
            arr_17 [i_2] [i_2 - 1] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6)) ? (((/* implicit */int) (unsigned char)241)) : (2)))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 2] [i_0])) : (((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1] [(unsigned char)8])))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_2 + 1])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) != (2078656689)))) : (((((/* implicit */int) (unsigned char)33)) / (((/* implicit */int) (unsigned char)71))))))));
            arr_18 [i_0] [4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (short)-658))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) -409725436)) && (((/* implicit */_Bool) (short)-10662)))) || (arr_9 [i_2] [i_2 - 1] [(_Bool)1])))) : (((/* implicit */int) (short)31269))));
        }
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 3) /* same iter space */
    {
        arr_21 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_5 - 1])) ? (((/* implicit */int) (unsigned char)48)) : (2147483647)));
        var_21 = ((/* implicit */_Bool) arr_20 [i_5 + 2]);
    }
    for (unsigned char i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -409725454)) ? (((/* implicit */int) arr_22 [i_6])) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (short)15723)) : (max((25165824), (((/* implicit */int) arr_23 [i_6])))))) > (((/* implicit */int) (short)20747))));
        var_23 += ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)211))))))) ? (((((/* implicit */int) (unsigned char)174)) + (((/* implicit */int) arr_19 [i_6 + 2])))) : ((((_Bool)0) ? (((/* implicit */int) arr_22 [(unsigned char)16])) : (((/* implicit */int) arr_22 [(short)18])))));
        var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(_Bool)0])) ? ((((_Bool)1) ? (((/* implicit */int) (short)3464)) : ((-2147483647 - 1)))) : (((/* implicit */int) arr_20 [i_6]))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) arr_22 [12])), ((short)-14863)))) ? ((+(((/* implicit */int) (unsigned char)36)))) : (((((/* implicit */_Bool) -18)) ? (-1059760141) : (1059760121))))) : ((+(((/* implicit */int) (short)32767))))))));
        var_25 += max((((((/* implicit */_Bool) arr_23 [i_6 + 2])) ? (((/* implicit */int) arr_23 [i_6 + 2])) : (((/* implicit */int) (unsigned char)136)))), (-379505799));
    }
}
