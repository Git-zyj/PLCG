/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57191
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
    var_15 = ((/* implicit */unsigned int) min((((((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (var_2)))) | ((~(((/* implicit */int) var_12)))))), (((/* implicit */int) (short)-31505))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-31503))) & (var_10)))) ? (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (1048575) : (arr_1 [i_0] [i_0]))))))) ? ((+(((/* implicit */int) var_0)))) : (max((((((/* implicit */int) arr_2 [i_0] [i_1])) % (((/* implicit */int) var_9)))), (((/* implicit */int) min((arr_2 [i_0] [i_1]), (((/* implicit */short) var_2))))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) max((arr_6 [i_0] [i_1] [i_1] [i_2]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])))))));
                            var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (max((((/* implicit */long long int) arr_4 [i_3] [i_2] [i_1])), (arr_0 [i_1] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_0] [i_1] [i_0])))));
                            var_19 = ((/* implicit */long long int) ((short) ((((arr_1 [i_2] [i_3]) >> (((arr_7 [i_3] [(short)7] [i_2] [i_2]) - (3495992465U))))) == (((/* implicit */int) max((arr_2 [i_1] [i_1]), ((short)31525)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((max((-1048573), (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (+(-1048563)));
                                var_22 = ((/* implicit */int) min((var_22), ((~(((/* implicit */int) arr_6 [6] [i_5 - 1] [6] [i_6 + 2]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) (short)-31517);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_24 = ((/* implicit */long long int) (signed char)117);
                    var_25 &= ((((/* implicit */_Bool) 3388438012U)) ? (((/* implicit */int) (short)-1847)) : (1048562));
                    var_26 = max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
                }
                for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        var_27 = ((/* implicit */long long int) min((((/* implicit */signed char) ((_Bool) 906529260U))), ((signed char)106)));
                        var_28 = ((/* implicit */long long int) (!(((_Bool) min((((/* implicit */int) var_12)), (-1048571))))));
                        var_29 = ((/* implicit */signed char) min((((arr_1 [i_0] [i_8]) / (arr_1 [i_0] [i_1]))), (min((1048577), (1048573)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_10 = 2; i_10 < 23; i_10 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_8] [i_8]);
                            var_31 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_20 [i_0] [7] [i_8] [i_10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_10] [i_10 - 1] [i_8] [i_10 - 1]))) : ((+(arr_17 [i_0] [i_0])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 2; i_11 < 23; i_11 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1847))) - (arr_13 [i_0] [i_11 - 2] [i_8] [i_0] [23U] [i_0])));
                            var_33 &= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)48))))) % (((/* implicit */int) var_9))));
                        }
                        for (unsigned short i_12 = 2; i_12 < 23; i_12 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_8] [i_9]))));
                            var_35 = ((/* implicit */int) (~(max((8902678925773570615LL), (((/* implicit */long long int) -1048563))))));
                        }
                        var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) -1048573)), (-6977693958107958670LL)))) ? ((~(var_5))) : (((/* implicit */int) ((signed char) 906529260U))))))));
                    }
                    var_37 = ((/* implicit */int) arr_24 [i_0] [i_0]);
                    var_38 &= ((/* implicit */unsigned short) arr_1 [i_1] [i_8]);
                    var_39 = ((/* implicit */short) ((long long int) 1048575));
                    var_40 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)64223))));
                }
            }
        } 
    } 
}
