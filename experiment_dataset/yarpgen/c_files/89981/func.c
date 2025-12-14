/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89981
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
    var_13 = max((((/* implicit */long long int) 1925890073)), (-2250646565227058091LL));
    var_14 = ((/* implicit */int) -1122783078740639937LL);
    var_15 = ((/* implicit */int) ((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) -1925890074)) : (var_10))), (((/* implicit */long long int) ((var_2) >= (var_7)))))) >= (max((((/* implicit */long long int) var_2)), (max((var_10), (((/* implicit */long long int) var_12))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (+(min((arr_3 [i_0]), (arr_1 [i_0])))))) ? (((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_5)) : (var_3)))) : (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -723214451)))))))));
                var_16 ^= ((long long int) ((((/* implicit */_Bool) ((6232144190242794491LL) - (arr_0 [i_0] [i_1 + 1])))) || (((/* implicit */_Bool) ((var_5) & (arr_2 [i_0] [i_1] [i_1 - 1]))))));
                var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) - (var_2)))) ? (((arr_0 [i_0 - 2] [i_1]) + (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) min((var_9), (var_2))))))) ? (max((((/* implicit */long long int) ((((/* implicit */long long int) arr_3 [0])) < (8930732921956424887LL)))), (((((/* implicit */_Bool) -1925890099)) ? (((/* implicit */long long int) 1398212091)) : (2305843009213431808LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) -1)) > (var_10)))))))))));
                arr_6 [i_0] [i_1] = (-(((((/* implicit */_Bool) ((var_10) / (((/* implicit */long long int) -1925890097))))) ? (((var_1) + (6916454210177932385LL))) : (((/* implicit */long long int) var_5)))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
                {
                    arr_11 [3LL] [3LL] [8LL] [i_0] = ((/* implicit */int) arr_7 [i_0] [i_0] [i_1 - 2] [i_0]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */long long int) (+(1234606216)))) >= (arr_4 [4] [i_2] [8LL]))))));
                        var_19 = ((arr_12 [i_2] [i_2] [i_1 + 1] [i_0 - 2]) << (((((((/* implicit */_Bool) 1417687266)) ? (67108863) : (arr_9 [i_2] [i_0 - 2]))) - (67108863))));
                        arr_14 [i_3] [4] [i_0] [i_1 - 2] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((1925890067) - (arr_3 [i_0])))) > (((arr_7 [i_0] [i_1] [i_2] [i_3]) / (((/* implicit */long long int) var_5))))));
                    }
                    arr_15 [i_0 - 1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) arr_8 [9LL] [i_1] [i_2] [i_2])) > (2193249603466040781LL))))))) > (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) 192)) : (((((/* implicit */_Bool) -6916454210177932407LL)) ? (-6632753712979864497LL) : (((/* implicit */long long int) 1073741824))))))));
                }
                for (long long int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                {
                    var_20 ^= ((/* implicit */int) ((long long int) (+(var_5))));
                    var_21 = var_9;
                    var_22 = ((/* implicit */int) max((4259984993390733016LL), (((/* implicit */long long int) 2147483647))));
                    var_23 = ((/* implicit */int) ((-2759481878954440021LL) & (((/* implicit */long long int) min(((+(1925890073))), (max((131071), (402653184))))))));
                }
                for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    arr_21 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [2LL] [i_5])) ? ((((-(var_3))) ^ (((((/* implicit */_Bool) -8)) ? (((/* implicit */long long int) -866323745)) : (9223372036854775807LL))))) : (((/* implicit */long long int) ((-233182971) % (8191))))));
                    var_24 = ((var_11) >> (((((((/* implicit */_Bool) max((var_11), (-1)))) ? ((-(var_6))) : (-220503982))) - (1658987196))));
                }
            }
        } 
    } 
}
