/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75637
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
    var_11 -= ((/* implicit */_Bool) var_6);
    var_12 = ((/* implicit */int) var_0);
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned short) var_8)))));
    var_14 ^= ((/* implicit */unsigned short) min((var_1), (((/* implicit */long long int) max((((/* implicit */unsigned short) (short)16383)), (max((var_0), (var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((short) 1490667026)), (((/* implicit */short) max(((signed char)-99), (((/* implicit */signed char) var_2)))))))) || ((!(((/* implicit */_Bool) arr_4 [i_1] [i_1 + 2] [i_1 + 1]))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_0] [14LL] [i_3] = ((/* implicit */unsigned char) arr_7 [i_0] [i_2] [(short)8] [i_4]);
                                var_16 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1] [i_1 - 1] [(unsigned short)12] [i_4 + 1] [6LL])) ? (((/* implicit */int) arr_8 [(signed char)4] [i_0] [i_1 - 1] [(signed char)4] [i_4 + 1] [i_4 - 2])) : (((/* implicit */int) arr_6 [i_0] [0] [i_1 - 1] [10])))), (((/* implicit */int) min((arr_6 [i_1] [i_1 + 2] [i_1 - 1] [i_3]), (arr_6 [(short)0] [5] [i_1 - 1] [i_1 - 1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_17 *= ((/* implicit */_Bool) var_6);
                            var_18 = ((/* implicit */unsigned char) -1490667033);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_7 = 1; i_7 < 19; i_7 += 3) 
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])) + (((((/* implicit */int) var_2)) + (((/* implicit */int) var_10)))))))));
                                arr_21 [i_0] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-12981)) ? (((/* implicit */long long int) 4294967289U)) : (-9003300007482911143LL)));
                                arr_22 [i_1 + 2] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0] [i_0])) <= (((/* implicit */int) (signed char)-1))));
                                var_20 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [(unsigned short)9])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))) % (((((/* implicit */int) var_6)) - (((/* implicit */int) var_9))))));
                            }
                            arr_23 [i_0] [(short)0] [i_1] [i_5] [i_6] [14U] = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) -506241611930725597LL))), (max((((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) arr_17 [i_0] [(short)4] [i_5] [16U])) : (-1490667033))), (arr_14 [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
