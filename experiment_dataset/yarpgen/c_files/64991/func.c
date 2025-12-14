/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64991
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) 2147483627);
                arr_8 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned short)62587)) ? (((/* implicit */int) arr_4 [i_1])) : ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [11])) || (((/* implicit */_Bool) var_2))))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned short)34489)) ? (((/* implicit */int) (unsigned short)34481)) : (2147483642))))) ? ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)34163)) <= (var_1)))))) : (min((((/* implicit */int) (unsigned short)35084)), (((((/* implicit */_Bool) (unsigned short)11072)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_2] [i_2]), (var_4)))) ? ((-(-1005197551))) : (((((/* implicit */_Bool) 2147483627)) ? (var_5) : (((/* implicit */int) (unsigned short)34486))))))) ? (max((((/* implicit */int) arr_4 [i_2])), (var_8))) : (((((/* implicit */_Bool) arr_12 [i_2])) ? (max((-318737522), (var_5))) : (((((/* implicit */int) (unsigned short)54463)) / (-299014223)))))));
        var_14 = (-(min((arr_10 [i_2]), (min((((/* implicit */int) (unsigned short)34168)), (var_3))))));
        arr_14 [(unsigned short)13] [(unsigned short)3] = ((((/* implicit */_Bool) -10)) ? (-1005197559) : (((/* implicit */int) (unsigned short)26126)));
    }
    for (int i_3 = 1; i_3 < 19; i_3 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((((/* implicit */int) (unsigned short)44999)) / (1829095993))) : (((((/* implicit */_Bool) -2083873987)) ? (1685619013) : (-1018726347)))))) ? (((/* implicit */int) ((unsigned short) -1005197559))) : (min((-1834094989), (var_7)))));
        arr_17 [i_3] = ((/* implicit */int) ((arr_5 [i_3 + 1]) != ((-(var_11)))));
        var_16 = (((-(13319680))) / (max(((-(2104247065))), (((/* implicit */int) min(((unsigned short)31372), (arr_6 [i_3] [11])))))));
        var_17 = ((/* implicit */unsigned short) (~(var_1)));
    }
    for (int i_4 = 3; i_4 < 24; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 2; i_5 < 24; i_5 += 3) 
        {
            var_18 = ((/* implicit */int) (unsigned short)39395);
            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39399)) << (((((/* implicit */int) (unsigned short)34486)) - (34479)))))) ? (((int) -981890333)) : ((+(1106554332)))))) ? (((((((/* implicit */int) (unsigned short)13629)) % (((/* implicit */int) (unsigned short)39395)))) >> (((842947982) - (842947965))))) : (((/* implicit */int) (unsigned short)34143)));
        }
        for (unsigned short i_6 = 3; i_6 < 24; i_6 += 2) 
        {
            var_20 = ((/* implicit */int) (unsigned short)30219);
            var_21 = ((((/* implicit */_Bool) min((arr_11 [i_4 - 2]), (arr_11 [i_4 - 1])))) ? (((int) var_1)) : (((arr_11 [i_4 - 3]) / (arr_11 [i_4 - 2]))));
            var_22 = ((/* implicit */unsigned short) (-(-1280327091)));
        }
        /* LoopSeq 2 */
        for (int i_7 = 1; i_7 < 23; i_7 += 4) 
        {
            var_23 = (~(((/* implicit */int) (unsigned short)13629)));
            /* LoopSeq 1 */
            for (int i_8 = 3; i_8 < 23; i_8 += 3) 
            {
                var_24 = (~(((((/* implicit */_Bool) arr_9 [i_4 - 2])) ? (16769024) : (arr_22 [i_4 - 2] [i_8 + 1] [i_8 + 1]))));
                arr_30 [i_8] = arr_12 [(unsigned short)8];
                arr_31 [i_4] [14] [i_7 + 2] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2068659037)) ? (((/* implicit */int) arr_0 [i_7 - 1] [i_8])) : (((/* implicit */int) arr_0 [i_7 + 2] [i_8 + 1]))))) ? ((((-(-1178611051))) & (((((/* implicit */_Bool) -209985946)) ? (((/* implicit */int) (unsigned short)13629)) : (var_10))))) : (((/* implicit */int) var_4)));
            }
            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((-172442394), (209985945))))));
            arr_32 [i_7] = ((((arr_5 [4]) & (((/* implicit */int) (unsigned short)62482)))) + (((/* implicit */int) ((2097152) >= (arr_11 [i_7 + 2])))));
            var_26 &= ((/* implicit */int) ((unsigned short) arr_18 [i_4]));
        }
        for (int i_9 = 1; i_9 < 21; i_9 += 2) 
        {
            arr_35 [i_4] [i_4 - 3] [i_9] = arr_1 [i_4 - 1];
            arr_36 [2] [i_9] &= arr_4 [i_9 + 1];
            var_27 = var_7;
        }
        /* LoopNest 3 */
        for (unsigned short i_10 = 1; i_10 < 22; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                for (int i_12 = 1; i_12 < 24; i_12 += 3) 
                {
                    {
                        arr_44 [i_4] [i_4] [i_4] [i_11] [i_12] = ((/* implicit */int) (((~(((((/* implicit */int) arr_12 [i_10])) + (((/* implicit */int) arr_4 [i_4])))))) == ((-((-(((/* implicit */int) (unsigned short)51920))))))));
                        var_28 ^= ((/* implicit */int) arr_12 [1]);
                    }
                } 
            } 
        } 
        arr_45 [i_4] [i_4] = ((/* implicit */unsigned short) var_12);
    }
    for (int i_13 = 3; i_13 < 24; i_13 += 2) /* same iter space */
    {
        arr_48 [i_13 - 3] [i_13 - 3] = max((((((/* implicit */_Bool) arr_24 [i_13 - 1] [i_13 - 1])) ? (((arr_1 [i_13]) + (var_1))) : (var_9))), (((/* implicit */int) max(((unsigned short)65535), (arr_42 [i_13 - 3] [i_13 - 2] [i_13 - 1])))));
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)63491)) ? (-209985946) : (((/* implicit */int) (unsigned short)0)))) / (min((209985932), (1004432754))))))));
    }
    var_30 = var_2;
    var_31 &= var_12;
}
