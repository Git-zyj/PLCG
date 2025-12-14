/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90435
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (-(min((1484066782U), (((/* implicit */unsigned int) var_5))))))) : (var_6)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((max((367076700U), (((/* implicit */unsigned int) (short)28137)))) << (((var_9) - (4382061871020629538LL))))), (((arr_3 [i_0] [i_0] [i_0]) << (((((/* implicit */int) (signed char)-50)) + (67)))))));
                    var_11 ^= ((/* implicit */unsigned long long int) -4151352454285854180LL);
                    var_12 = min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-96)), (var_1))))) < (13558650022683093173ULL)))), (var_9));
                    arr_8 [i_0] [i_0] [i_0] [(unsigned short)12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)112))));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */long long int) arr_1 [i_0] [i_2]);
                }
                for (short i_3 = 2; i_3 < 19; i_3 += 1) 
                {
                    var_13 ^= ((unsigned long long int) (+(((/* implicit */int) (signed char)-1))));
                    arr_12 [i_0] = ((/* implicit */long long int) (+(((1652560076U) << (((260096LL) - (260083LL)))))));
                    arr_13 [i_0] [i_0] [i_3 - 2] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_6 [i_0] [i_3 - 1] [i_3] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (min((((var_6) & (var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1158648966U)) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_0])))))))));
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-96))))), (((7359597292966417881LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                    var_15 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)28139))) - (arr_3 [i_3 + 2] [i_1] [i_3 + 2])))), (((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) max((((/* implicit */short) (unsigned char)94)), (var_1)))) - (39)))))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_1] [i_4] [i_5] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14680))) ^ (var_0));
                        arr_19 [i_5] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                        arr_20 [i_5] [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        arr_21 [i_0] [i_0] [i_1] [i_1] [i_4] [i_0] = ((/* implicit */_Bool) var_4);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            {
                                arr_27 [i_0] [i_1] [i_4] [i_0] [i_7] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-1))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)214)) <= (((/* implicit */int) (short)-21671)))))));
                                arr_28 [i_0] [i_1] [i_4] [i_4] [i_0] [i_7] = ((/* implicit */short) ((long long int) var_2));
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)29)))))));
                }
                var_18 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                            {
                                arr_35 [i_0] [i_0] [i_8] [i_9] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)238)) >= (((((/* implicit */int) (unsigned char)20)) / (((/* implicit */int) (unsigned short)53006)))))))));
                                var_19 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-28152)))))) <= (-4151352454285854168LL))));
                                arr_36 [i_10] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-68)) ? (var_4) : (((/* implicit */unsigned long long int) arr_31 [i_0] [i_1] [i_8] [i_9])))))));
                                arr_37 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */unsigned char) var_7);
                            }
                            for (short i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
                            {
                                var_20 ^= arr_6 [i_0] [i_1] [i_0] [i_1];
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((-1LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)230)))))) & (((/* implicit */int) (signed char)-58))));
                                arr_40 [i_0] [i_0] [i_0] [i_8] [i_0] [i_9] [i_11] = ((/* implicit */_Bool) var_5);
                                var_22 ^= ((/* implicit */unsigned long long int) (+(max((arr_34 [i_8]), (arr_34 [i_8])))));
                            }
                            /* LoopSeq 4 */
                            for (unsigned short i_12 = 2; i_12 < 20; i_12 += 1) 
                            {
                                var_23 = ((((/* implicit */_Bool) (signed char)-76)) ? (min((var_9), (((/* implicit */long long int) arr_26 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 2] [i_12 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
                                arr_43 [i_0] [i_0] [i_8] [i_9] [i_12 + 1] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((long long int) arr_24 [i_0]));
                                arr_44 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((-(4589082344147842072LL))) : (((arr_41 [i_8] [i_0] [i_12 - 1] [i_12] [i_12 - 1]) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1)))))));
                            }
                            for (short i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) <= (((unsigned long long int) -6415075812893286723LL))))) << (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28138))) * (var_4)))) ? (((/* implicit */int) ((_Bool) -5318311909334589619LL))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))))));
                                var_25 ^= ((/* implicit */unsigned long long int) ((short) ((((12901888733024324766ULL) <= (var_4))) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) var_5)))));
                            }
                            for (short i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
                            {
                                var_26 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */unsigned long long int) 3136318317U)) : (10467005063560058740ULL))), (((/* implicit */unsigned long long int) (unsigned char)124))));
                                arr_49 [i_0] [i_0] [i_8] [i_9] = min((((/* implicit */long long int) arr_30 [i_0])), (min((var_6), (((/* implicit */long long int) var_5)))));
                            }
                            /* vectorizable */
                            for (short i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
                            {
                                arr_53 [i_0] = ((/* implicit */unsigned long long int) ((arr_6 [(_Bool)1] [i_8] [i_9] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (signed char)-76))))))));
                                var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */int) (short)28143)) << (((/* implicit */int) (unsigned char)7)))))));
                                arr_54 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_9]))) == (8064U))))));
                            }
                        }
                    } 
                } 
                arr_55 [i_0] = ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((10467005063560058730ULL) >= (0ULL))))) : ((~(min((18337283555220801404ULL), (((/* implicit */unsigned long long int) (short)28143)))))));
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) var_7);
    var_29 = ((/* implicit */unsigned short) var_0);
    var_30 = ((/* implicit */signed char) var_1);
}
