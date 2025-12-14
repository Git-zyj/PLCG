/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75283
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_16 += ((/* implicit */long long int) -1381045206);
                    var_17 = min((((/* implicit */long long int) (unsigned char)15)), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (var_6)))) ? (max((7282822374259325578LL), (var_10))) : (var_13))));
                    arr_6 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (1326585264))), (((((/* implicit */_Bool) var_14)) ? (var_15) : (686605733)))))) : (max((140737488347136LL), (((((/* implicit */_Bool) 1326585273)) ? (((/* implicit */long long int) 686605733)) : (17175674880LL)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            arr_11 [i_4] [i_1] [i_0] [i_3] [i_4 - 1] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)0)));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */long long int) -686605709)) : (var_10)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) -1)) : (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) (unsigned char)0)))))));
                        }
                        var_19 = ((/* implicit */int) var_14);
                    }
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 0)), (((((/* implicit */_Bool) 2960103159430671777LL)) ? (var_1) : (((/* implicit */long long int) -1326585273))))))) ? (max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) 16128)) ? (var_11) : (((/* implicit */long long int) (-2147483647 - 1))))))) : (max((((/* implicit */long long int) var_3)), (max((var_13), (var_1)))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((-229863978), (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (unsigned char)8))))) ? (max((var_6), (min((-3672022087043703310LL), (((/* implicit */long long int) -686605748)))))) : (max((((/* implicit */long long int) 1519794798)), (0LL)))));
                        var_22 = ((/* implicit */unsigned char) var_2);
                    }
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_16 [i_6] [i_6] [i_2] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) max((max((var_3), (((/* implicit */int) var_12)))), (((/* implicit */int) min((var_5), (var_4))))))), (var_1)));
                        var_23 = ((/* implicit */unsigned char) 2857981146005977525LL);
                        arr_17 [i_0] = ((/* implicit */unsigned char) var_10);
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (16888498602639360LL) : (((/* implicit */long long int) 1326585237)))), (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */long long int) 1326585264)) : (var_6)))) ? (max((var_14), (((/* implicit */long long int) var_9)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 1326585273)) : (2857981146005977525LL))))) : (((((/* implicit */_Bool) max((var_6), (var_0)))) ? (((((/* implicit */_Bool) 1326585237)) ? (var_0) : (((/* implicit */long long int) 33554424)))) : (((/* implicit */long long int) max((657299168), (2147483647))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 1; i_7 < 22; i_7 += 2) 
                        {
                            arr_20 [i_6] [i_0] [i_2] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 33554424)) : (var_0))), (((((/* implicit */_Bool) 4145116589182259890LL)) ? (var_6) : (var_13)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1303213427)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (min((((/* implicit */long long int) -613867963)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))))) : (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 2147483647)) : (var_10))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) : (var_0)))))));
                            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (-932471156) : (2147483647)));
                            arr_21 [i_0] [i_6] = ((/* implicit */int) (unsigned char)63);
                            arr_22 [i_0] [i_1] [i_2] [i_0] [i_0] [i_1] = ((/* implicit */int) min((max((max((var_6), (var_0))), (((/* implicit */long long int) max((var_2), (var_2)))))), (((/* implicit */long long int) 613867958))));
                            var_26 = 1326585300;
                        }
                        for (int i_8 = 2; i_8 < 23; i_8 += 3) 
                        {
                            arr_25 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (max((var_14), (var_14))) : (max((((/* implicit */long long int) var_7)), (var_6)))))) ? (max((var_11), (((/* implicit */long long int) (unsigned char)12)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)146)), (-1)))) ? (-1326585293) : (max((1326585265), (((/* implicit */int) (unsigned char)63)))))))));
                            var_27 = ((((/* implicit */_Bool) (unsigned char)56)) ? (613867957) : (max((((/* implicit */int) max(((unsigned char)9), ((unsigned char)13)))), (-1326585257))));
                        }
                    }
                    arr_26 [i_0] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)170)) ? (1326585276) : (229863977))), (var_15)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) 229863977)) : (858644824965539545LL)))) ? (var_0) : (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */long long int) 1032106086)))))) : (max((max((((/* implicit */long long int) 1326585292)), (var_13))), (((/* implicit */long long int) max((var_15), (2147483647)))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */long long int) (unsigned char)12);
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */long long int) (unsigned char)9)), (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) var_8)) : (var_3))))))) ? (5430562209408407471LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)25), ((unsigned char)101)))) ? (var_3) : (((((/* implicit */_Bool) var_7)) ? (0) : (1615783362))))))));
    var_30 = var_7;
}
