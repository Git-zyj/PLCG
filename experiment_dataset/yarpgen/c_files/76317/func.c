/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76317
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) (unsigned short)27544);
        var_13 -= ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)27517)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                    var_15 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) max(((unsigned char)26), (arr_0 [i_0])))) < (((/* implicit */int) (unsigned short)27544))))), (min((((((/* implicit */int) var_11)) % (((/* implicit */int) var_11)))), ((~(var_9)))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) (+(-131072)));
        arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))))), ((unsigned char)249)))) ^ (((/* implicit */int) ((((/* implicit */int) var_5)) >= (-2116759684))))));
    }
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) 
            {
                {
                    arr_20 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (min((3682230260188756389LL), (((/* implicit */long long int) arr_15 [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned char)71))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (short i_7 = 1; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((min((-731967598), (-1452571568))) + (((/* implicit */int) (short)22085)))), ((~(((/* implicit */int) arr_21 [i_7 + 1] [i_4] [i_4] [i_5 + 1])))))))));
                                arr_26 [(unsigned char)18] [i_3] [(unsigned char)8] [7] [i_7] [(short)0] = ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                    arr_27 [i_3] [10LL] = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) + (((/* implicit */int) (unsigned char)255))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        var_19 = ((/* implicit */short) ((int) 18));
        arr_31 [i_8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)255))));
    }
}
