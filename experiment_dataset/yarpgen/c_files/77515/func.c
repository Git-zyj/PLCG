/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77515
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_12)) : (var_0)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned short) arr_1 [8U] [i_0]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_3 [i_0])))))))));
        var_16 = ((/* implicit */short) var_5);
        var_17 -= ((/* implicit */short) -6079290290980795782LL);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_9 [i_1] [3U] [1ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) var_9))))), (((long long int) var_2))))) ? (var_10) : ((+(-1320264849)))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) arr_10 [(short)0] [i_2] [i_3]);
                            var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) -1320264844))))))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (724408232281373130ULL)));
                            /* LoopSeq 1 */
                            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                            {
                                arr_17 [i_4] [i_3] = ((((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [(unsigned short)13] [i_3] [i_4] [i_5] [i_5] [6LL]))) : (var_0))) << (((var_5) - (1016440599))));
                                arr_18 [i_1] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned int) -1320264837)) | (((((/* implicit */_Bool) (unsigned char)5)) ? (388869320U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28)))))));
                                arr_19 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (arr_12 [i_3])))) ? ((-(var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5])))))) && (((/* implicit */_Bool) (unsigned char)149)));
                            }
                            var_21 -= ((/* implicit */long long int) min((((/* implicit */int) (short)-3270)), ((+(((/* implicit */int) (short)35))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((min((((((/* implicit */_Bool) (short)-26564)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned char)234)))), (((/* implicit */int) (unsigned char)199)))) | (((/* implicit */int) ((((/* implicit */_Bool) (+(var_8)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_6 [(short)0] [(_Bool)1] [8U])), ((unsigned short)52377))))))))))));
            }
        } 
    } 
}
