/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73005
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
    var_10 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_11 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)163), ((unsigned char)235))))) < (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)13696)) && (((/* implicit */_Bool) var_8)))))) | (((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [9ULL])))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            arr_6 [(_Bool)1] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) (short)2622)) / (((/* implicit */int) (short)-32759)))), (((/* implicit */int) (unsigned short)62613)))) - (((arr_3 [i_0]) << (((((var_6) + (5073897061516728303LL))) - (16LL)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((((var_9) + (2147483647))) << (((1549504355) - (1549504355))))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))) == (var_1))))));
                        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (16251884701561891078ULL)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)110)) - (1028122676))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((max((((/* implicit */int) (signed char)61)), (arr_3 [i_0]))) / (((/* implicit */int) (signed char)124))))) / (min((arr_7 [i_0] [i_0] [i_4] [i_4]), (13245291504279565504ULL))))))));
            arr_17 [(short)3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17605)) || (((/* implicit */_Bool) 1187759941)))))) | (((((/* implicit */unsigned long long int) -1LL)) | (33554368ULL)))));
            var_14 += ((/* implicit */short) min((((/* implicit */unsigned long long int) ((1116892707587883008LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21)))))), (((max((1298123444127535412ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [5ULL])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) < (15)))))))));
            arr_18 [i_0] [i_0] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)72)))) + (((/* implicit */int) (unsigned short)0))))), (min((((/* implicit */unsigned int) ((620239845) << (((((/* implicit */int) arr_12 [i_0] [16] [i_0] [11ULL] [i_4] [i_0])) - (232)))))), (3518371305U)))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned char)255)), (15213033386710635292ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) * (7928249318091770052LL)))))))) < (min((((/* implicit */long long int) ((arr_19 [i_5]) & (((/* implicit */unsigned int) var_2))))), (((((/* implicit */long long int) var_9)) ^ (var_1)))))));
            arr_21 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_4 [i_5]) < (((/* implicit */long long int) 1457456291U))))) << (((((((/* implicit */int) arr_8 [7LL] [i_5] [i_5] [i_0])) * (((/* implicit */int) arr_0 [i_0])))) + (1584)))));
        }
    }
}
