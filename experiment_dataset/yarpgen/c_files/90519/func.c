/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90519
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
    var_16 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (unsigned char)128))))));
    var_17 = ((/* implicit */long long int) (-(var_6)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_14))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_1]))))) : (((/* implicit */int) (_Bool)0))))) ? ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (min((-2088506984), (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))))))));
                    arr_8 [i_0] = ((/* implicit */signed char) var_3);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) || (((/* implicit */_Bool) var_11)))))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_1] [i_4] [i_3] [i_1 + 2] [i_4]))) : (((((/* implicit */int) arr_12 [(_Bool)1] [i_1] [i_1] [i_3] [i_1 - 3] [i_4])) % (((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_0] [i_1 + 2] [i_3]))))));
                                var_21 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_12 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_3] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))));
                                arr_14 [1ULL] [i_0] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)16)))) | (((/* implicit */int) var_9))));
                                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((int) (unsigned char)8));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        arr_19 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))));
                        arr_20 [i_0] = ((/* implicit */unsigned short) 1308157987U);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        arr_23 [i_0] [i_0] [i_2] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        var_22 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)25)) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) (short)-17107)))), ((((!(((/* implicit */_Bool) (unsigned short)24669)))) ? ((~((-2147483647 - 1)))) : ((~(arr_11 [i_0])))))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_17 [i_0] [i_0] [i_6])), (((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */int) ((_Bool) var_13))) : ((+(((/* implicit */int) var_11))))))));
                        arr_25 [i_0] [(_Bool)1] [i_2] [(unsigned char)15] [i_0] = ((/* implicit */int) var_10);
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_4)))))))));
        var_24 = ((/* implicit */unsigned char) (+(2198031989660007813LL)));
        var_25 += ((/* implicit */signed char) ((long long int) var_0));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
        var_27 = min((min((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_11))))))), (((/* implicit */unsigned char) arr_17 [i_7] [(unsigned char)8] [i_7])));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_31 [i_8] [i_8] = max((((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((((/* implicit */int) arr_12 [5LL] [i_8] [5LL] [5LL] [i_8] [(short)16])) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (signed char)-123))))))), (((((/* implicit */_Bool) arr_12 [i_8] [9U] [i_8] [i_8] [i_8] [i_8])) ? ((-(((/* implicit */int) (signed char)122)))) : (((/* implicit */int) var_4)))));
        arr_32 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((arr_27 [(_Bool)1] [(_Bool)1]) >> (((((unsigned long long int) var_0)) - (8451ULL)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_9 = 3; i_9 < 16; i_9 += 3) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                var_28 *= ((/* implicit */_Bool) ((((((_Bool) 8045317313669575580ULL)) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) var_1)))) : ((+(((/* implicit */int) var_2)))))) + ((-(((/* implicit */int) var_7))))));
                arr_40 [(short)17] [i_10] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)25112)) ? (((/* implicit */int) (unsigned short)8192)) : (((/* implicit */int) (unsigned char)38))));
            }
        } 
    } 
}
