/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84410
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
    var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) var_9))), (((((/* implicit */_Bool) min((var_6), ((short)6144)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))) : (var_8)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101))) - (1610679992U))), (((/* implicit */unsigned int) ((short) (unsigned short)25886))));
        var_12 = ((/* implicit */signed char) (short)-2071);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) ((short) var_9)))))) / (((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)8444)), (1740672118U)))) % (-5881014643854472686LL)))));
    }
    for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            var_13 = ((/* implicit */short) arr_5 [i_1]);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50537)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) : (((9465834156003109337ULL) + (((/* implicit */unsigned long long int) 7900296601822964192LL))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_3])) + (((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_1 [(unsigned short)2])))) : ((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (((((_Bool)0) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (short)32525)))) > (((/* implicit */int) (signed char)9)))))));
                        arr_14 [i_1] [i_2] [i_3 + 2] [i_3 + 2] [i_3 + 1] = ((/* implicit */long long int) (unsigned char)10);
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                var_15 = 2531246477U;
                arr_17 [i_1 - 2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32754))))) ? (((/* implicit */int) (short)-29409)) : (arr_0 [i_5])));
            }
            for (unsigned char i_6 = 4; i_6 < 15; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 1; i_7 < 14; i_7 += 4) 
                {
                    var_16 -= ((/* implicit */signed char) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) arr_10 [i_1 - 2] [i_6]))))))), (-27452003456909634LL)));
                    arr_23 [(short)1] [i_2 + 1] [i_7] [11LL] = ((/* implicit */short) (+(((/* implicit */int) var_5))));
                }
                arr_24 [i_6 + 1] [i_2 - 2] [i_1] = ((/* implicit */int) max((((((/* implicit */int) ((signed char) var_5))) < ((+(((/* implicit */int) var_7)))))), ((!(((/* implicit */_Bool) arr_20 [i_1 + 2] [10LL] [i_2] [i_6]))))));
                arr_25 [i_6 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 133693440ULL))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) (short)24483)))))) ? (((((/* implicit */_Bool) arr_7 [i_6 - 2])) ? (((/* implicit */int) arr_7 [i_6 - 4])) : (((/* implicit */int) arr_9 [i_2 + 1])))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2])))))))));
                arr_26 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 - 1])) ? (arr_8 [i_2] [i_2 + 1]) : (arr_8 [i_2] [i_2 - 1])))) ? (((/* implicit */int) ((unsigned short) ((short) arr_12 [i_1] [i_2 + 1] [i_6 - 3] [i_6] [i_6 - 4])))) : (((((/* implicit */_Bool) arr_21 [i_1] [i_1 + 2] [i_1] [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((_Bool) arr_13 [i_1 - 1] [i_6] [i_2] [(signed char)16] [i_1 - 1])))))));
            }
            arr_27 [12LL] [i_2 - 1] = (_Bool)1;
            var_17 &= ((/* implicit */short) (~((~((-(((/* implicit */int) (short)2044))))))));
        }
        var_18 -= ((short) (+(((/* implicit */int) (unsigned short)65535))));
        var_19 = ((/* implicit */signed char) (short)-23081);
        arr_28 [i_1] [i_1 - 2] = ((/* implicit */_Bool) arr_10 [i_1] [i_1 + 1]);
    }
    var_20 = ((/* implicit */_Bool) var_3);
}
