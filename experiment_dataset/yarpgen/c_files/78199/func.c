/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78199
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
    var_13 = ((((((/* implicit */int) (!(((/* implicit */_Bool) -1))))) == (((/* implicit */int) var_1)))) ? (var_6) : (((/* implicit */long long int) (~(min((882367632U), (((/* implicit */unsigned int) 0))))))));
    var_14 = ((/* implicit */int) (_Bool)1);
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_15 += ((/* implicit */short) ((max((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) (short)-2180)), (var_5))))) <= (((/* implicit */int) var_8))));
        var_16 = min((var_11), (((/* implicit */int) var_1)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_3] [i_3] &= ((/* implicit */_Bool) var_10);
                        var_17 = ((int) arr_7 [i_0] [i_0] [i_2] [i_3]);
                    }
                    for (int i_4 = 2; i_4 < 17; i_4 += 4) 
                    {
                        arr_15 [i_2] = (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3979258564U));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) min((var_1), (var_12)))) < (min((var_11), (((/* implicit */int) var_9))))))) == (var_5))))));
                        var_19 = ((/* implicit */unsigned int) var_11);
                    }
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        arr_18 [i_0 - 1] [i_2] [i_2] [16ULL] [i_2] = ((/* implicit */int) var_2);
                        arr_19 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4)))))))), ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 1943124526U)) : (var_6)))))));
                    }
                    arr_20 [i_0] [(_Bool)1] [i_2] [i_2] &= ((/* implicit */_Bool) ((((min((var_0), (((/* implicit */unsigned long long int) 215225882510345221LL)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))) : (var_10)))))) - (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (short)2180)) : (var_5))) * (((/* implicit */int) min(((short)-17057), (arr_11 [i_0] [14] [14] [i_0 - 3] [14])))))))));
                }
            } 
        } 
        var_20 -= ((((((/* implicit */_Bool) (signed char)-82)) && ((_Bool)1))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-32741)), (arr_0 [i_0])))), (((((/* implicit */_Bool) var_2)) ? (var_2) : (var_2)))))));
    }
    for (int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5286723048076795252LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) var_10)), (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_24 [i_6] [i_7] [19U])))))))));
                    var_22 *= ((/* implicit */unsigned short) (+(min((var_11), (((/* implicit */int) arr_6 [i_8] [i_8 - 1] [i_7]))))));
                    arr_30 [i_6] [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? ((~(-1995610120))) : (((((/* implicit */_Bool) arr_2 [8])) ? (arr_2 [i_6]) : (var_5)))))));
                    var_23 = ((/* implicit */unsigned char) var_5);
                }
            } 
        } 
        arr_31 [i_6] = ((var_1) ? (((((/* implicit */_Bool) arr_26 [i_6])) ? (arr_26 [i_6]) : (0))) : (((((/* implicit */int) arr_29 [i_6] [i_6] [i_6] [i_6])) / (min((var_11), (-34844518))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_9 = 1; i_9 < 16; i_9 += 1) 
        {
            arr_35 [i_6] [(signed char)5] [i_6] = ((((/* implicit */int) (_Bool)1)) & ((-(((/* implicit */int) (unsigned char)248)))));
            var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (signed char)79))) ? (var_5) : (((/* implicit */int) arr_28 [i_6] [(unsigned char)16] [i_9 + 4] [i_9 + 3]))));
            arr_36 [i_6] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_9] [i_9] [i_9 + 4] [i_9])) - (((/* implicit */int) arr_8 [i_9 + 3] [19] [i_9 + 2] [i_9 + 2] [i_9] [i_9]))));
        }
        for (unsigned int i_10 = 2; i_10 < 18; i_10 += 1) 
        {
            var_25 = ((/* implicit */int) arr_33 [i_6]);
            /* LoopSeq 1 */
            for (signed char i_11 = 2; i_11 < 19; i_11 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_28 [i_10 + 2] [i_10] [i_10 + 2] [i_11 + 1])) : (((/* implicit */int) arr_28 [i_10 - 1] [i_10] [18U] [i_11 + 1]))))));
                arr_44 [i_6] [i_10] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) var_9)), (arr_34 [i_11 + 1] [i_10 - 1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16564179686563717691ULL)))))));
            }
        }
        for (unsigned char i_12 = 1; i_12 < 16; i_12 += 1) 
        {
            var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-64)), (max((min((arr_1 [(_Bool)1]), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) min((arr_4 [i_12]), (((/* implicit */signed char) (_Bool)1)))))))));
            arr_48 [i_12] [i_12] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_9 [i_12] [i_12] [i_12] [i_12] [i_12 - 1])) ? (((/* implicit */int) arr_9 [i_12] [i_12] [i_12] [i_12] [i_12 + 1])) : (((/* implicit */int) arr_9 [i_12] [i_12] [i_12] [i_12] [i_12 - 1])))), (((((/* implicit */_Bool) arr_46 [i_6] [i_12 + 4])) ? ((+(((/* implicit */int) (short)-14157)))) : (((((/* implicit */int) (unsigned char)248)) * (((/* implicit */int) var_7))))))));
            var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -215225882510345221LL)))) : (min((((/* implicit */long long int) arr_17 [i_6] [i_6] [i_6] [i_6])), ((-(var_6)))))));
        }
    }
    for (int i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
    {
        arr_51 [19U] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [(signed char)4] [i_13] [i_13] [i_13])) >= (((/* implicit */int) arr_38 [i_13] [i_13] [i_13]))));
        var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))));
    }
}
