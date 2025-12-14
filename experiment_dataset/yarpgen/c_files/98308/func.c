/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98308
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)255))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_10)))))) : (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned char) var_1)), ((unsigned char)255)))))));
    var_12 = ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))) > (((/* implicit */int) (_Bool)1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) (+(((((/* implicit */int) (signed char)-108)) + (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
                        var_15 = ((/* implicit */signed char) var_4);
                        arr_10 [i_0] [i_3] [i_0 + 1] = ((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_1]);
                        arr_11 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */short) arr_2 [i_0]);
                    }
                    var_16 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_9 [i_1]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)5)) << (((/* implicit */int) (_Bool)1))))) % (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (arr_14 [i_0] [i_4] [i_5])))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                {
                    arr_20 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_7)) - (24)))))));
                    arr_21 [i_0 + 2] [i_4] [i_4] [i_5] = ((/* implicit */int) arr_2 [i_6]);
                }
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 2])) << (((((/* implicit */int) arr_17 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2])) - (60695)))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_0 + 1] [i_4]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) ? (arr_1 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [i_0 - 1])))));
                    arr_24 [i_0 + 2] [i_4] [i_5] [i_5] = ((/* implicit */long long int) (-((-(((/* implicit */int) var_1))))));
                }
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0 - 1])) << (((/* implicit */int) arr_12 [i_0 - 1])))))));
                var_21 &= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
            }
            for (long long int i_8 = 3; i_8 < 23; i_8 += 3) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (arr_1 [i_0])));
                var_23 += ((/* implicit */_Bool) var_8);
            }
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) arr_13 [i_0] [i_0] [i_0])))));
            var_25 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned char)229)))));
        }
        for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) || (((/* implicit */_Bool) (signed char)92))));
            arr_29 [10ULL] [10ULL] |= ((/* implicit */signed char) arr_28 [i_0] [i_0 + 2] [i_0]);
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 2])) ? (arr_9 [i_0 - 1]) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)68))))))))));
        }
    }
}
