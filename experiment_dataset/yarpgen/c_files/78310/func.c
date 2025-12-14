/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78310
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (short)31927)))))) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (216172782113783808ULL)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (short)8064)))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */short) min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned short)36118)) ? (((/* implicit */int) (short)-24021)) : (((/* implicit */int) var_7)))) + (2147483647))) >> (((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) (_Bool)1))))) - (23088))))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_12 [0ULL] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_3), (((short) arr_0 [i_3] [(unsigned short)7]))))) <= (((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_3]))))));
                        var_18 ^= var_9;
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_0] [i_0])), (((short) (unsigned short)0)))))) > (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (min((arr_0 [i_1] [i_0]), (arr_10 [i_0] [(_Bool)1] [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_7), ((short)24021))))) != (-5217842409709904496LL)))) > (min(((+(((/* implicit */int) (short)-7281)))), ((+(((/* implicit */int) (unsigned char)113))))))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
        }
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            arr_15 [(unsigned short)10] [i_4] = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned short)31351)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_0 [i_4] [i_4]))) <= ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (2278068884654337068LL))))) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (short)-24010)) : (((/* implicit */int) (short)-10105)))) : (((/* implicit */int) max((((/* implicit */short) var_6)), (arr_9 [i_4] [10LL] [i_0]))))));
            arr_16 [i_4] [i_4] = ((/* implicit */_Bool) (((~(((/* implicit */int) (short)7813)))) * (((/* implicit */int) (short)(-32767 - 1)))));
        }
        /* vectorizable */
        for (short i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                var_22 = ((/* implicit */short) (unsigned short)120);
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_8))));
            }
            var_24 = ((((/* implicit */_Bool) (short)-7300)) ? (-951106998950949733LL) : (-8224570313812768241LL));
        }
        arr_22 [i_0] = ((/* implicit */_Bool) max((((var_6) ? (-8224570313812768241LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0]))))), (((long long int) var_1))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_26 [i_7] = ((/* implicit */short) max((min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) var_8)))))), (((/* implicit */int) var_6))));
        /* LoopNest 3 */
        for (short i_8 = 2; i_8 < 19; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    {
                        arr_35 [i_7] [i_8 - 2] [i_9] [i_9] [i_10] &= ((/* implicit */_Bool) (+(min((((/* implicit */long long int) max((var_8), (arr_25 [i_9] [i_9])))), ((+(var_15)))))));
                        var_25 = ((/* implicit */unsigned short) -8618443166722229980LL);
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) 6690341201559142211LL))));
                    }
                } 
            } 
        } 
        var_27 ^= ((/* implicit */long long int) (_Bool)0);
        var_28 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_25 [i_7] [i_7])))) * (((/* implicit */int) ((((/* implicit */int) arr_25 [i_7] [18LL])) > (((/* implicit */int) arr_25 [i_7] [i_7])))))));
        var_29 += ((/* implicit */unsigned short) var_1);
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1392717986804938613LL))) - (((/* implicit */long long int) (+(((/* implicit */int) (short)-32753)))))));
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 679011579341877525LL))) ? (min((((/* implicit */long long int) var_9)), (-8986026138686201196LL))) : (max((((/* implicit */long long int) arr_24 [i_11])), (4611686018427387872LL)))));
        arr_38 [i_11] [i_11] = ((/* implicit */_Bool) var_0);
    }
    var_32 = ((/* implicit */unsigned short) min((var_32), (var_11)));
}
