/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87180
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
    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)26))));
    var_14 = ((/* implicit */short) min((1058533572U), (max((max((((/* implicit */unsigned int) (signed char)107)), (2980209173U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2557687055903104494LL)) && (((/* implicit */_Bool) (short)-2371)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((_Bool) (unsigned short)51554)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_2 [i_0]))))))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2030036246)))))) & (((long long int) arr_0 [i_1]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */int) max((var_16), (max((min((((/* implicit */int) min((((/* implicit */short) var_2)), (var_9)))), ((+(((/* implicit */int) (unsigned short)46944)))))), (((/* implicit */int) ((((unsigned long long int) var_10)) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) arr_9 [i_3 + 2]))))))))))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2557687055903104494LL)) ? (-5546651090350370443LL) : (2557687055903104502LL)))) ? ((+(((/* implicit */int) arr_9 [i_3 + 3])))) : (((/* implicit */int) var_11)))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_4 = 2; i_4 < 14; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(664789945U)))) ? (((/* implicit */int) arr_14 [i_3] [i_3 - 2] [i_3] [i_3 - 1] [8])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10234)))))));
                                var_19 = ((/* implicit */unsigned short) (+(11462585724869685556ULL)));
                                arr_16 [i_3] [i_4 + 2] = ((/* implicit */_Bool) 3236433719U);
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_3 + 2] [(unsigned short)16] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 1]))) : (arr_15 [i_0] [i_1] [i_3] [i_1] [i_4])));
                            }
                            for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                            {
                                var_20 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((_Bool) 6984158348839866051ULL))), (min((((/* implicit */unsigned long long int) (_Bool)0)), (13236800793875146319ULL))))) | (((/* implicit */unsigned long long int) min((arr_8 [i_3 + 1] [14] [i_3 - 2] [(unsigned char)0]), (arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 3]))))));
                                arr_22 [i_3] [i_3] = ((/* implicit */short) ((unsigned long long int) ((arr_8 [i_0] [i_0] [i_3 + 2] [i_5]) + (arr_8 [i_0] [i_1] [i_1] [i_3]))));
                            }
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_5))));
                        }
                    } 
                } 
            }
        } 
    } 
}
